# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target scorbot_msgs::scorbot_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${scorbot_msgs_TARGETS}.
if(scorbot_msgs_TARGETS AND NOT TARGET scorbot_msgs::scorbot_msgs)
  add_library(scorbot_msgs::scorbot_msgs INTERFACE IMPORTED)
  set_target_properties(scorbot_msgs::scorbot_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${scorbot_msgs_TARGETS}")
endif()
