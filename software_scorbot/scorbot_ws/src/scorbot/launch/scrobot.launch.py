import os

from pathlib import Path

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription, SetEnvironmentVariable
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node

def generate_launch_description():



    teleop_key = Node(package='keyboard', executable='keyboard',
                        name='keyboard',
                        output='screen',
    )

    teleop_joy = Node(package='joy', executable='joy_node',
                        name='joy',
                        output='screen',
    )

    teleop_params_file = os.path.join(get_package_share_directory("universal_teleop"), 'launch', 'scorbot_input_map.yaml')

    universal = Node(package='universal_teleop', executable='universal_teleop',
                        name='universal_teleop',
                        output='screen',
                        parameters=[teleop_params_file],
                
    )

    scorbot = Node(package='scorbot', executable='scorbot',
                        name='scorbot',
                        output='screen',
                        parameters={
                            'control_frequency' : '4'
                        },
    )

    ld = LaunchDescription()
    ld.add_action(teleop_key)
    ld.add_action(teleop_joy)
    ld.add_action(universal)
    ld.add_action(scorbot)
    return ld