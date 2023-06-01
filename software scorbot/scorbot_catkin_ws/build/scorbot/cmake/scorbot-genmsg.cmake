# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "scorbot: 3 messages, 0 services")

set(MSG_I_FLAGS "-Iscorbot:/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(scorbot_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg" NAME_WE)
add_custom_target(_scorbot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "scorbot" "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg" NAME_WE)
add_custom_target(_scorbot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "scorbot" "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg" ""
)

get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg" NAME_WE)
add_custom_target(_scorbot_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "scorbot" "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg" "std_msgs/Header"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/scorbot
)
_generate_msg_cpp(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/scorbot
)
_generate_msg_cpp(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/scorbot
)

### Generating Services

### Generating Module File
_generate_module_cpp(scorbot
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/scorbot
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(scorbot_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(scorbot_generate_messages scorbot_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_cpp _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_cpp _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_cpp _scorbot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(scorbot_gencpp)
add_dependencies(scorbot_gencpp scorbot_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS scorbot_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/scorbot
)
_generate_msg_eus(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/scorbot
)
_generate_msg_eus(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/scorbot
)

### Generating Services

### Generating Module File
_generate_module_eus(scorbot
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/scorbot
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(scorbot_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(scorbot_generate_messages scorbot_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_eus _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_eus _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_eus _scorbot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(scorbot_geneus)
add_dependencies(scorbot_geneus scorbot_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS scorbot_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/scorbot
)
_generate_msg_lisp(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/scorbot
)
_generate_msg_lisp(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/scorbot
)

### Generating Services

### Generating Module File
_generate_module_lisp(scorbot
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/scorbot
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(scorbot_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(scorbot_generate_messages scorbot_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_lisp _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_lisp _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_lisp _scorbot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(scorbot_genlisp)
add_dependencies(scorbot_genlisp scorbot_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS scorbot_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/scorbot
)
_generate_msg_nodejs(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/scorbot
)
_generate_msg_nodejs(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/scorbot
)

### Generating Services

### Generating Module File
_generate_module_nodejs(scorbot
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/scorbot
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(scorbot_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(scorbot_generate_messages scorbot_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_nodejs _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_nodejs _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_nodejs _scorbot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(scorbot_gennodejs)
add_dependencies(scorbot_gennodejs scorbot_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS scorbot_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/scorbot
)
_generate_msg_py(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/scorbot
)
_generate_msg_py(scorbot
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/scorbot
)

### Generating Services

### Generating Module File
_generate_module_py(scorbot
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/scorbot
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(scorbot_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(scorbot_generate_messages scorbot_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointVelocities.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_py _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/TrajectoryPoint.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_py _scorbot_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software scorbot/scorbot_catkin_ws/src/scorbot/msg/JointTrajectory.msg" NAME_WE)
add_dependencies(scorbot_generate_messages_py _scorbot_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(scorbot_genpy)
add_dependencies(scorbot_genpy scorbot_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS scorbot_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/scorbot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/scorbot
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(scorbot_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/scorbot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/scorbot
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(scorbot_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/scorbot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/scorbot
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(scorbot_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/scorbot)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/scorbot
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(scorbot_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/scorbot)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/scorbot\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/scorbot
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(scorbot_generate_messages_py std_msgs_generate_messages_py)
endif()
