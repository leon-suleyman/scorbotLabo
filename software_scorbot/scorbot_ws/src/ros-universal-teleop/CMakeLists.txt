
#find_package(catkin REQUIRED COMPONENTS roscpp std_msgs geometry_msgs nav_msgs keyboard joy message_generation)





cmake_minimum_required(VERSION 3.14.4)
if(NOT CMAKE_CXX_STANDARD)
set(CMAKE_CXX_STANDARD 17)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
add_compile_options(-Wall -Wextra -Wpedantic)
endif()
project(universal_teleop)

find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(keyboard_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(universal_teleop_msgs REQUIRED)

#######################################
## Declare ROS messages and services ##
#######################################


###########
## Build ##
###########
set(msg_dependencies "std_msgs" "nav_msgs" "geometry_msgs" "keyboard_msgs" "sensor_msgs" "universal_teleop_msgs")

add_executable(universal_teleop src/main.cpp src/teleop.cpp)
ament_target_dependencies(universal_teleop rclcpp ${msg_dependencies})


target_include_directories(universal_teleop PUBLIC
"$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
"$<INSTALL_INTERFACE:include/${PROJECT_NAME}>")

target_link_libraries(universal_teleop
rclcpp::rclcpp
${std_msgs_TARGETS}
${nav_msgs_TARGETS}
${geometry_msgs_TARGETS}
${keyboard_msgs_TARGETS}
${sensor_msgs_TARGETS}
${universal_teleop_msgs_TARGETS}
)



#add_dependencies(keyboard keyboard_gencpp)

#############
## Install ##
#############


install(TARGETS universal_teleop
  DESTINATION "lib/${PROJECT_NAME}")
  
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)
ament_package()