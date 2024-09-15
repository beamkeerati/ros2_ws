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
from param_interfaces.srv import SetControllerGain,SetNumberPizza

import numpy as np
import yaml
import os
from pathlib import Path


class ControllerNode(Node):
    def __init__(self):
        super().__init__('copy_controller_node')
        
        # Access the namespace
        namespace = self.get_namespace()
        self.get_logger().info(f"Node is running in namespace: {namespace}")
        self.namespace = namespace
        #Set param
        self.declare_parameter('display', 'monitor2')
        self.display = self.get_parameter('display').get_parameter_value().string_value
        
        #Set Callback Frequency
        self.declare_parameter("frequency", 100.0)
        self.frequency = self.get_parameter("frequency").get_parameter_value().double_value
        self.create_timer(1 / self.frequency, self.timer_callback)
        
        # if '/monitor2/' in namespace:
        #     self.play4_server = self.create_service(SetBool, "/play4", self.play4_server_callback)

        
        #Set Turtlesim_plus protocol
        self.complete_path_client = None
        # if '/monitor2/' in namespace:
        #     self.complete_path_client = self.create_client(SetBool, "/num_complete_path")
        #     self.num_complete_path = 0;
            

        self.cmd_vel_pub = self.create_publisher(Twist, "cmd_vel", 10)
        self.create_subscription(Pose, "pose", self.pose_callback, 10)
        self.spawn_pizza_client = self.create_client(GivePosition,'/' + self.display + "/spawn_pizza")
        self.eat_pizza_client = self.create_client(Empty, "eat")
        self.switch_state_client = self.create_client(ConfigureController, '/' + self.display + "/switch_state")
        self.create_subscription(Point, '/' + self.display + "/mouse_position", self.mouse_position_callback, 10)
        self.create_subscription(String, '/' + self.display + "/current_state", self.current_state_callback, 10)
        self.key_command_server = self.create_service(ConfigureController, '/' + self.display + "/key_command_server", self.keyboard_server_callback)
        self.num_usable_pizza_server = self.create_service(SetNumberPizza, '/' + self.display + "/num_usable_pizza_server", self.num_usable_pizza_server_callback)
        self.set_controller_gain_server = self.create_service(SetControllerGain,'/' + self.display + "/set_controller_gain",self.set_controller_gain_server_callback)
        
        
        #Set Turtle Parameter
        self.current_state = "IDLE"
        self.num_usable_pizza = 50;
        self.mouse_pose = np.array([0.0, 0.0])
        self.key_pose = np.array([0.0, 0.0])
        self.robot_pose = np.array([0.0, 0.0, 0.0])
        self.target_position = np.array([0.0, 0.0])
        self.queue = np.array([[0.0, 0.0]])
        self.run = True
        self.kp_d = 2.5#5.5 3
        self.kp_theta = 25#10.5
        self.m1_cmd_vel_linear =0
        self.m1_cmd_vel_angular =0
        
        
        #yaml read/write
        self.start_point =[]
        self.path_index = 0
        self.position_data = []
        self.yaml_paths = {
            'path1': [],
            'path2': [],
            'path3': [],
            'path4': []
        }
        self.get_path1=[]
        self.get_path2=[]
        self.get_path3=[]
        self.get_path4=[]
        
        #Clear pizza
        self.clear = []
        
        self.get_logger().info("controller_node has been started.")
        
    # def play4_server_callback(self, request:SetBool, response:SetBool):
    #     self.switch_state("PLAY")
    #     self.load_yaml()
    #     self.queue = np.array(self.get_path1)
    #     if 'Foxy' in self.namespace:
    #         self.queue = np.array(self.get_path1)
    #     elif 'Noetic' in self.namespace:
    #         self.queue = np.array(self.get_path2)
    #     elif 'Iron' in self.namespace:
    #         self.queue = np.array(self.get_path3)
    #     elif 'Humble' in self.namespace:
    #         self.queue = np.array(self.get_path4)
    #     #self.queue = np.array(self.position_data[::-1])
    #     self.get_logger().info(f"Set {self.queue}")
    #     print(f"Set {self.queue}")
        
    #     return response
        
    def set_controller_gain_server_callback(self,request:SetControllerGain,response:SetControllerGain):
        self.kp_d = float(request.kp_d)
        self.kp_theta = float(request.kp_theta)
        return response
        
    def num_usable_pizza_server_callback(self, request:SetNumberPizza, response:SetNumberPizza):
        self.num_usable_pizza = int(request.num_usable_pizza);
        return response
        
    def keyboard_server_callback(self, request:ConfigureController, response:ConfigureController):
        key = str(request.name)
        self.get_logger().info(f"Current State: {self.current_state} | Pressed: {key}")

        return response

    def get_monitor_cmd_vel_callback(self,msg:Twist):
        self.m1_cmd_vel_linear =msg.linear.x 
        self.m1_cmd_vel_angular =msg.angular.z

        
    def current_state_callback(self, msg:String):
        self.current_state = msg.data

    def mouse_position_callback(self, msg):
        # num_rows, num_cols = self.queue.shape
        # if num_rows == 0:
        if self.current_state == "TEST2":
            self.mouse_pose[0] = msg.x
            self.mouse_pose[1] = msg.y
            self.spawn_pizza(self.mouse_pose[0], self.mouse_pose[1])
            # self.target_position = self.mouse_pose
            self.queue = np.append(self.queue, [self.mouse_pose], axis=0)
            print(self.mouse_pose)
            
    def pose_callback(self, msg):
        # print(msg)
        self.robot_pose[0] = msg.x
        self.robot_pose[1] = msg.y
        self.robot_pose[2] = msg.theta
        
    def complete_path(self):
        if self.complete_path_client is not None:
            complete_path_request  = SetBool.Request()
            complete_path_request.data = True
            self.complete_path_client.call_async(complete_path_request)
        else:
            self.get_logger().warning("complete_path_client is not available in this namespace.")
        
    def switch_state(self,state):
        state_request = ConfigureController.Request()
        state_request.name = str(state)
        # while not self.switch_state_client.wait_for_service(1.0):
        #     self.get_logger().info(f"Can't Connect to switch_state server")
        self.switch_state_client.call_async(state_request)

    def eat_pizza(self):
        eat_request = Empty.Request()
        # while not self.eat_pizza_client.wait_for_service(1.0):
        #     self.get_logger().info(f"Can't Connect to eat_pizza server")
        self.eat_pizza_client.call_async(eat_request)

    def spawn_pizza(self, x, y):
        position_request = GivePosition.Request()
        position_request.x = x
        position_request.y = y
        # while not self.spawn_pizza_client.wait_for_service(1.0):
        #     self.get_logger().info(f"Can't Connect to spawn_pizza server")
        self.spawn_pizza_client.call_async(position_request)

    # def save_yaml(self,data):
    #     with open('/turtle_fun/yaml/path.yaml', 'w') as file:
    #         yaml.dump(data, file, default_flow_style=False)

    def get_yaml_path(self):
        # Get the absolute path to the script
        script_path = os.path.abspath(__file__)
        # Split the script path into parts
        path_parts = script_path.split(os.sep)
        # Try to find 'install' or 'src' in the path
        if 'install' in path_parts:
            index = path_parts.index('install')
            workspace_dir = os.sep.join(path_parts[:index])
        elif 'src' in path_parts:
            index = path_parts.index('src')
            workspace_dir = os.sep.join(path_parts[:index])
        else:
            raise Exception("Cannot determine workspace directory from script path.")
        # Build the source directory path
        src_dir = os.path.join(workspace_dir, 'src')
        # Build the package directory path
        package_dir = os.path.join(src_dir, 'turtle_fun')
        # Build the full path to 'path.yaml'
        yaml_path = os.path.join(package_dir, 'yaml', 'path.yaml')
        return yaml_path
    
    def load_yaml(self):

        yaml_path = self.get_yaml_path()
        with open(yaml_path, 'r') as file:
            data = yaml.safe_load(file)
            self.start_point = [data['path1'], data['path2'], data['path3'], data['path4']]
            
            self.get_path1=data['path1']
            self.get_path2=data['path2']
            self.get_path3=data['path3']
            self.get_path4=data['path4']
            # # Loop over the path indices from 1 to 4
            # for i in range(1, 5):
            #     path_key = f'path{i}'
            #     get_path_attr = f'get_path{i}'
                
            #     # Corrected line: Assign an empty list if the path is empty
            #     self_value = data[path_key] or []
                
            #     setattr(self, get_path_attr, self_value)


    
    
    def save_yaml(self, data):
        yaml_path = self.get_yaml_path()
        with open(yaml_path, 'w') as file:
            yaml.dump(data, file, default_flow_style=False)
        self.get_logger().info(f"{yaml_path}")

    def cmdvel(self, v, w):
        msg = Twist()
        msg.linear.x = v
        msg.angular.z = w
        self.cmd_vel_pub.publish(msg)
        
    def walk_eat_until_end(self):
        
        if self.queue.size == 0:
            self.get_logger().info("No waypoints to process.")
            self.cmdvel(0.0, 0.0)
            self.current_state = "IDLE"
            self.switch_state("IDLE")
            return
        
        num_rows, num_cols = self.queue.shape

        if num_rows > 0:

            self.run = True
            
            self.target_position = self.queue[0]
            self.delta = self.target_position - self.robot_pose[:2]
            self.dist = np.linalg.norm(self.delta)
            self.target_theta = np.arctan2(self.delta[1], self.delta[0])
            self.error_theta = self.target_theta - self.robot_pose[2]

            self.cmdvel(self.kp_d * self.dist, self.kp_theta * self.error_theta)

            if self.error_theta > np.pi:
                self.error_theta -= 2 * np.pi
            elif self.error_theta < -np.pi:
                self.error_theta += 2 * np.pi


            
            if self.dist > 0.2:
                if self.run:
                    self.cmdvel(self.kp_d * self.dist, self.kp_theta * self.error_theta)
                # self.eat_pizza()
                print(f"Control {self.queue[0]} {self.dist}")
            else:
                self.cmdvel(0.0, 0.0)
                if self.run:
                    self.eat_pizza()
                    self.queue = np.delete(self.queue, 0, axis=0)
                    
            
        else:
            self.cmdvel(0.0, 0.0)
            self.eat_pizza()
            print(f"Finished {num_rows}")
            self.current_state == "IDLE"
            self.switch_state("IDLE")

    def walk_spawn_until_end(self):
        
        num_rows, num_cols = self.queue.shape

        if num_rows > 0:

            self.run = True
            
            self.target_position = self.queue[0]
            self.delta = self.target_position - self.robot_pose[:2]
            self.dist = np.linalg.norm(self.delta)
            self.target_theta = np.arctan2(self.delta[1], self.delta[0])
            self.error_theta = self.target_theta - self.robot_pose[2]

            self.cmdvel(self.kp_d * self.dist, self.kp_theta * self.error_theta)

            if self.error_theta > np.pi:
                self.error_theta -= 2 * np.pi
            elif self.error_theta < -np.pi:
                self.error_theta += 2 * np.pi


            
            if self.dist > 0.1:
                if self.run:
                    self.cmdvel(self.kp_d * self.dist, self.kp_theta * self.error_theta)
                # self.eat_pizza()
               
                print(f"Control {self.queue[0]} {self.dist}")
            else:
                #self.cmdvel(0.0, 0.0)
                if self.run:

                    self.spawn_pizza(self.robot_pose[0], self.robot_pose[1])
                    # self.eat_pizza()
                    self.queue = np.delete(self.queue, 0, axis=0)
                    
            
        else:
            self.cmdvel(0.0, 0.0)
            self.spawn_pizza(self.robot_pose[0], self.robot_pose[1])
            print(f"Finished {num_rows}")
            self.current_state == "IDLE"
            self.switch_state("IDLE")
            
    def go_corner(self):
        
        num_rows, num_cols = self.queue.shape
        self.queue = np.append(self.queue, [np.array([11.0, 11.0])], axis=0)
        self.queue = np.append(self.queue, [np.array([11.0, 11.0])], axis=0)
        
        if num_rows > 0:

            self.run = True
            
            self.target_position = self.queue[0]
            self.delta = self.target_position - self.robot_pose[:2]
            self.dist = np.linalg.norm(self.delta)
            self.target_theta = np.arctan2(self.delta[1], self.delta[0])
            self.error_theta = self.target_theta - self.robot_pose[2]

            self.cmdvel(self.kp_d * self.dist, self.kp_theta * self.error_theta)

            if self.error_theta > np.pi:
                self.error_theta -= 2 * np.pi
            elif self.error_theta < -np.pi:
                self.error_theta += 2 * np.pi


            
            if self.dist > 0.1:
                if self.run:
                    self.cmdvel(self.kp_d * self.dist, self.kp_theta * self.error_theta)
                # self.eat_pizza()
               
                print(f"Control {self.queue[0]} {self.dist}")
            else:
                #self.cmdvel(0.0, 0.0)
                if self.run:
                    pass
                    #self.spawn_pizza(self.robot_pose[0], self.robot_pose[1])
                    # self.eat_pizza()
                    #self.queue = np.delete(self.queue, 0, axis=0)
                    
            
        else:
            self.cmdvel(0.0, 0.0)
            self.spawn_pizza(self.robot_pose[0], self.robot_pose[1])
            print(f"Finished {num_rows}")
            self.current_state == "IDLE"
            self.switch_state("IDLE")
        
    def timer_callback(self):
        # self.cmdvel(0.1,0.5)
        # if self.current_state == "Q":
        #     self.queue = np.array(self.position_data)
        #     print(f"Set {self.queue}")
        #     self.current_state == "IDLE"
        #     self.switch_state("IDLE")
        if self.current_state == "IDLE" :
            self.go_corner()
            
        if self.current_state == "PLAY4S" and '/monitor2/' in self.namespace:
            self.walk_spawn_until_end()

            
        if self.current_state == "PLAY4" and '/monitor2/' in self.namespace:
            self.get_logger().info("Go in")
            
            self.load_yaml()
            # Load the appropriate path based on the namespace
            if 'Foxy' in self.namespace:
                self.queue = np.array(self.get_path1)
            elif 'Noetic' in self.namespace:
                self.queue = np.array(self.get_path2)
            elif 'Iron' in self.namespace:
                self.queue = np.array(self.get_path3)
            elif 'Humble' in self.namespace:
                self.queue = np.array(self.get_path4)

            # self.target_position = self.mouse_pose
            self.queue = np.append(self.queue, [np.array([11.0, 11.0])], axis=0)
            self.get_logger().info(f"Set {self.queue} for PLAY4S")
            self.switch_state("PLAY4S")


        
        # elif self.current_state == "DRAW":
            
        #     pass

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
