#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray
from geometry_msgs.msg import Twist
from controller_manager_msgs.srv import LoadController, ConfigureController  # Import the services

import sys, select, termios, tty

class TeleopKeyNode(Node):
    def __init__(self):
        super().__init__('teleop_key_node')
        
        # Access the namespace
        namespace = self.get_namespace()
        self.get_logger().info(f"Node is running in namespace: {namespace}")
        self.namespace = namespace

        #Set Callback Frequency
        self.declare_parameter("frequency", 100.0)
        self.frequency = self.get_parameter("frequency").get_parameter_value().double_value
        self.create_timer(1 / self.frequency, self.timer_callback)

        # Set up publishers for /cmd_vel and /key_command
        self.key_command_pub = self.create_publisher(Int32MultiArray, "/monitor1/key_command", 10)
        self.twist_pub = self.create_publisher(Twist, "/monitor1/cmd_vel", 10)

        # Set up service clients for LoadController and ConfigureController

        self.configure_controller_client = self.create_client(ConfigureController, '/monitor1/key_command_server')

        # Speed and turning rate
        self.speed = 3.0
        self.turn = 2.5

        # Initialize key states for w, a, s, d, i, o, p
        self.key_state = [0, 0, 0, 0, 0, 0, 0]  # [w, a, s, d, i, o, p]
        self.last_key = ''  # Store the last key pressed

        # Terminal settings for keyboard input
        self.settings = termios.tcgetattr(sys.stdin)

        self.get_logger().info("telop_key_node has been started.")
        


    def getKey(self):
        tty.setraw(sys.stdin.fileno())
        select.select([sys.stdin], [], [], 0)
        key = sys.stdin.read(1)
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)
        return key

    def reset_key_state(self):
        """Reset all key states to 0."""
        self.key_state = [0, 0, 0, 0, 0, 0, 0]  # Reset all to 0

    def update_key_state(self, key):
        """Update the key state based on the key pressed."""
        if key == 'w':
            self.key_state[0] = 1  # w
        elif key == 'a':
            self.key_state[1] = 1  # a
        elif key == 's':
            self.key_state[2] = 1  # s
        elif key == 'd':
            self.key_state[3] = 1  # d
        elif key == 'i':
            self.key_state[4] = 1  # i
        elif key == 'o':
            self.key_state[5] = 1  # o
        elif key == 'p':
            self.key_state[6] = 1  # p
            
    def send_key(self,key):
        send_key_request = ConfigureController.Request()
        send_key_request.name = str(key)
        self.configure_controller_client.call_async(send_key_request)

    def timer_callback(self):
        
        key = self.getKey()

        # Handle movement keys for /cmd_vel (w, s, a, d)
        twist = Twist()
        if key == 'w':
            twist.linear.x = self.speed
        elif key == 's':
            twist.linear.x = -self.speed
        elif key == 'a':
            twist.angular.z = self.turn
        elif key == 'd':
            twist.angular.z = -self.turn
        else:
            twist = Twist()  # Stop the turtle when no valid movement key is pressed
            
        self.get_logger().info(f"{key}")
        self.send_key(key)
        # Publish the movement command
        self.twist_pub.publish(twist)

        # Update the key state and publish to /key_command
        self.reset_key_state()
        self.update_key_state(key)

        # Store the last key pressed
        self.last_key = key

        # Publish the key state array
        key_msg = Int32MultiArray()
        key_msg.data = self.key_state
        self.key_command_pub.publish(key_msg)



        # Exit on Ctrl-C
        if key == '\x03':
            rclpy.shutdown()
            return




def main(args=None):
    rclpy.init(args=args)
    node = TeleopKeyNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()