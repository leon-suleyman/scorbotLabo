cmake_minimum_required(VERSION 3.14.4)
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
project(keyboard)

find_package(rosidl_default_generator REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(message_generation REQUIRED)
find_package(sdl2_vendor REQUIRED)
find_package(sdl2_custom REQUIRED)

target_include_directories(keyboard 
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
   "$<INSTALL_INTERFACE:include/${PROJECT_NAME}>")

#######################################
## Declare ROS messages and services ##
#######################################

add_message_files(
  FILES
  Key.msg
)

rosidl_generate_interfaces(
  DEPENDENCIES
  std_msgs
)

###########
## Build ##
###########



add_executable(keyboard src/main.cpp src/keyboard.cpp)

target_include_directories(keyboard 
"$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:include/${PROJECT_NAME}>")

target_link_libraries(keyboard
  rclcpp::rclcpp
  ${std_msgs_TARGETS}
  SDL2::SDL2
)

add_dependencies(keyboard keyboard_gencpp)

#############
## Install ##
#############


install(TARGETS keyboard
  LIBRARY DESTINATION "lib/${PROJECT_NAME}"
  ARCHIVE DESTINATION "lib/${PROJECT_NAME}"
  RUNTIME DESTINATION "bin/${PROJECT_NAME}")

ament_export_targets(keyboard)
ament_export_dependencies(
  "rclcpp"
  "std_msgs"
  "sdl2_vendor"
  "sdl2_custom")

ament_package();
