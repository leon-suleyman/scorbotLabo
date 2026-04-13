cmake_minimum_required(VERSION 3.14.4)
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
project(keyboard)

find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(SDL2 REQUIRED)
#find_package(sdl2_custom REQUIRED)

find_package(keyboard_msgs REQUIRED)

#######################################
## Declare ROS messages and services ##
#######################################


###########
## Build ##
###########

add_executable(keyboard src/main.cpp src/keyboard.cpp)
ament_target_dependencies(keyboard rclcpp SDL2 keyboard_msgs)
#set(msg_files "msg/Key.msg")
#
#rosidl_generate_interfaces(${PROJECT_NAME}
#  ${msg_files}
#  DEPENDENCIES
#  std_msgs
#)
#
#rosidl_target_interfaces(keyboard
#  ${PROJECT_NAME} "rosidl_typesupport_cpp")


target_include_directories(keyboard PUBLIC
"$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
"$<INSTALL_INTERFACE:include/${PROJECT_NAME}>")

target_link_libraries(keyboard
rclcpp::rclcpp
${std_msgs_TARGETS}
SDL2::SDL2
${keyboard_msgs_TARGETS}
)


#add_dependencies(keyboard keyboard_gencpp)

#############
## Install ##
#############


install(TARGETS keyboard #EXPORT export_keyboard
  DESTINATION "lib/${PROJECT_NAME}")

  #ament_export_dependencies(
  #  "rclcpp"
  #  "std_msgs"
  #  "SDL2"
  #  #"sdl2_custom"
  #  "ros_keyboard_msgs")
  #  
  #ament_export_targets(export_keyboard)
ament_package()
