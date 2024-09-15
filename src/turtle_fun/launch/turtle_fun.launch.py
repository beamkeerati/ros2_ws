from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    
    launch_description = LaunchDescription()
    
    teleop_turtle_name = "GodBeam"
    copy_turtle_name = ["Foxy", "Noetic", "Humble", "Iron"]
    monitor = ["monitor1", "monitor2"]
    
    # Spawn turtle1 default
    turtlesim1_node = Node(
        package='turtlesim_plus',
        namespace='monitor1',
        executable='turtlesim_plus_node.py',
        name='turtlesim'
    )
    launch_description.add_action(turtlesim1_node)
    
    # Spawn turtle2 default
    turtlesim2_node = Node(
        package='turtlesim_plus',
        namespace='monitor2',
        executable='turtlesim_plus_node.py',
        name='turtlesim'
    )
    launch_description.add_action(turtlesim2_node)
    
    # Kill turtle1
    kill_turtle1 = ExecuteProcess(
        cmd=["ros2 service call /monitor1/remove_turtle turtlesim/srv/Kill \"name: 'turtle1'\""],
        shell=True,
    )
    launch_description.add_action(kill_turtle1)
    
    # Kill turtle2
    kill_turtle2 = ExecuteProcess(
        cmd=["ros2 service call /monitor2/remove_turtle turtlesim/srv/Kill \"name: 'turtle1'\""],
        shell=True,
    )
    launch_description.add_action(kill_turtle2)
    
    # Spawn Teleop Turtle
    spawn_teleop_turtle = ExecuteProcess(
        cmd=[
            f"ros2 service call /monitor1/spawn_turtle turtlesim/srv/Spawn \"{{x: 0.0, y: 0.0, theta: 0.0, name: '{teleop_turtle_name}'}}\""
        ],
        shell=True,
    )
    launch_description.add_action(spawn_teleop_turtle)
    
    # Spawn copy turtles using a for loop
    for i, name in enumerate(copy_turtle_name):
        spawn_copy_turtle = ExecuteProcess(
            cmd=[
                f"ros2 service call /monitor2/spawn_turtle turtlesim/srv/Spawn \"{{x: {-5.0 + i}, y: {-5.0 + i}, theta: 0.0, name: '{name}'}}\""
            ],
            shell=True,
        )
        launch_description.add_action(spawn_copy_turtle)
    
    #---------------------------------------------------------Spawn All Turtle---------------------------------------------------------#
    
    # Open Teleop Schedule Node
    teleop_schedule = Node(
        package='turtle_fun',
        namespace='/monitor1/',
        executable='teleop_schedule.py',
        name='teleop_schedule_node',
    )
    launch_description.add_action(teleop_schedule)
    
    # Open copy Schedule Node
    copy_schedule = Node(
        package='turtle_fun',
        namespace='/monitor2/',
        executable='teleop_schedule.py',
        name='teleop_schedule_node',
    )
    launch_description.add_action(copy_schedule)
    
    # Open Teleop Controller Turtle Node
    teleop_controller = Node(
        package='turtle_fun',
        namespace='/monitor1/' + teleop_turtle_name,
        executable='controller.py',
        name='controller_node',
        parameters=[
            {'display': monitor[0]}
        ]
    )
    launch_description.add_action(teleop_controller)
    
    # Open Copy1 Controller Turtle Node
    copy1_controller = Node(
        package='turtle_fun',
        namespace='/monitor2/' + copy_turtle_name[0],
        executable='copy_controller.py',
        name='controller_node',
        parameters=[
            {'display': monitor[1]}
        ]
    )
    launch_description.add_action(copy1_controller)
    
    # Open Copy2 Controller Turtle Node
    copy2_controller = Node(
        package='turtle_fun',
        namespace='/monitor2/' + copy_turtle_name[1],
        executable='copy_controller.py',
        name='controller_node',
        parameters=[
            {'display': monitor[1]}
        ]
    )
    launch_description.add_action(copy2_controller)
    
    # Open Copy3 Controller Turtle Node
    copy3_controller = Node(
        package='turtle_fun',
        namespace='/monitor2/' + copy_turtle_name[2],
        executable='copy_controller.py',
        name='controller_node',
        parameters=[
            {'display': monitor[1]}
        ]
    )
    launch_description.add_action(copy3_controller)
    
    # Open Copy4 Controller Turtle Node
    copy4_controller = Node(
        package='turtle_fun',
        namespace='/monitor2/' + copy_turtle_name[3],
        executable='copy_controller.py',
        name='controller_node',
        parameters=[
            {'display': monitor[1]}
        ]
    )
    launch_description.add_action(copy4_controller)
       
    return launch_description
