#!/usr/bin/python3

from turtle_fun.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node

from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import Twist, Point, TransformStamped, PoseStamped
from turtlesim.msg import Pose
from turtlesim_plus_interfaces.srv import GivePosition
from std_srvs.srv import Empty
from std_msgs.msg import String
from std_srvs.srv import SetBool
from controller_manager_msgs.srv import LoadController,ConfigureController

class Teleop_scheduleNode(Node):
    def __init__(self):
        super().__init__('teleop_schedule_node')
        # Access the namespace
        namespace = self.get_namespace()
        self.get_logger().info(f"Node is running in namespace: {namespace}")
        self.namespace = namespace
        self.play4_client = None
        
        if '/monitor2/' in namespace:
            self.complete_path_server = self.create_service(SetBool, "/num_complete_path", self.complete_path_server_callback)
            self.num_complete_path = 0;
            self.play4_client = self.create_client(SetBool, "/play4")
        
        #Set Callback Frequency
        self.declare_parameter("frequency", 100.0)
        self.frequency = self.get_parameter("frequency").get_parameter_value().double_value
        self.create_timer(1 / self.frequency, self.timer_callback)
        
        #Set protocol
        self.current_state_pub = self.create_publisher(String, "current_state", 10)
        self.switch_state_server = self.create_service(ConfigureController, "switch_state", self.switch_state_server_callback)
        
        #Set Robot State
        self.current_state = "IDLE"
        
        self.get_logger().info("teleop_schedule_node has been started.")
        
    def play4(self):
        if self.play4_client is not None:
            play4_client_request  = SetBool.Request()
            self.current_state = "PLAY4"
            play4_client_request.data = True
            self.complete_path_client.call_async(play4_client_request)
        else:
            self.get_logger().warning("complete_path_client is not available in this namespace.")
        
    def complete_path_server_callback(self, request:SetBool, response:SetBool):
        self.num_complete_path +=1
        if self.num_complete_path == 4:
            self.current_state = "PLAY4"
            # self.play4()
            self.num_complete_path =0
        return response

    def switch_state_server_callback(self, request:ConfigureController, response:ConfigureController):
        self.current_state = str(request.name)
        return response
    
    def timer_callback(self):
        msg = String()
        msg.data = self.current_state
        self.current_state_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = Teleop_scheduleNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
