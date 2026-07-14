cmake_minimum_required(VERSION 3.8)
project(scorbot)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
find_package(rclcpp REQUIRED)
find_package(scorbot_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(universal_teleop_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
#find_package(trajectory_msgs REQUIRED)
#find_package(control_msgs REQUIRED)
#find_package(actionlib_msgs REQUIRED)

set(msg_dependencies "scorbot_msgs" "std_msgs" "universal_teleop_msgs" "geometry_msgs" "sensor_msgs")#"trajectory_msgs" "control_msgs" "actionlib_msgs")


add_executable(scorbot src/scorbot.cpp src/scorbot_node.cpp)
ament_target_dependencies(scorbot rclcpp ${msg_dependencies})

target_include_directories(scorbot PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(scorbot PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17


target_link_libraries(scorbot
rclcpp::rclcpp
${scorbot_msgs_TARGETS}
${std_msgs_TARGETS}
${universal_teleop_msgs_TARGETS}
${geometry_msgs_TARGETS}
${sensor_msgs_TARGETS}
#${trajectory_msgs_TARGETS}
#${control_msgs_TARGETS}
#${actionlib_teleop_msgs_TARGETS}
)

install(TARGETS scorbot
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
