# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "universal_teleop: 2 messages, 0 services")

set(MSG_I_FLAGS "-Iuniversal_teleop:/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(universal_teleop_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg" NAME_WE)
add_custom_target(_universal_teleop_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "universal_teleop" "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg" NAME_WE)
add_custom_target(_universal_teleop_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "universal_teleop" "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg" "std_msgs/Header"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/universal_teleop
)
_generate_msg_cpp(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/universal_teleop
)

### Generating Services

### Generating Module File
_generate_module_cpp(universal_teleop
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/universal_teleop
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(universal_teleop_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(universal_teleop_generate_messages universal_teleop_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_cpp _universal_teleop_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_cpp _universal_teleop_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(universal_teleop_gencpp)
add_dependencies(universal_teleop_gencpp universal_teleop_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS universal_teleop_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/universal_teleop
)
_generate_msg_eus(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/universal_teleop
)

### Generating Services

### Generating Module File
_generate_module_eus(universal_teleop
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/universal_teleop
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(universal_teleop_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(universal_teleop_generate_messages universal_teleop_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_eus _universal_teleop_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_eus _universal_teleop_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(universal_teleop_geneus)
add_dependencies(universal_teleop_geneus universal_teleop_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS universal_teleop_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/universal_teleop
)
_generate_msg_lisp(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/universal_teleop
)

### Generating Services

### Generating Module File
_generate_module_lisp(universal_teleop
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/universal_teleop
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(universal_teleop_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(universal_teleop_generate_messages universal_teleop_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_lisp _universal_teleop_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_lisp _universal_teleop_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(universal_teleop_genlisp)
add_dependencies(universal_teleop_genlisp universal_teleop_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS universal_teleop_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/universal_teleop
)
_generate_msg_nodejs(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/universal_teleop
)

### Generating Services

### Generating Module File
_generate_module_nodejs(universal_teleop
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/universal_teleop
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(universal_teleop_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(universal_teleop_generate_messages universal_teleop_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_nodejs _universal_teleop_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_nodejs _universal_teleop_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(universal_teleop_gennodejs)
add_dependencies(universal_teleop_gennodejs universal_teleop_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS universal_teleop_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/universal_teleop
)
_generate_msg_py(universal_teleop
  "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/universal_teleop
)

### Generating Services

### Generating Module File
_generate_module_py(universal_teleop
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/universal_teleop
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(universal_teleop_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(universal_teleop_generate_messages universal_teleop_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Event.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_py _universal_teleop_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/teleop_packages/universal_teleop/src/ros-universal-teleop/msg/Control.msg" NAME_WE)
add_dependencies(universal_teleop_generate_messages_py _universal_teleop_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(universal_teleop_genpy)
add_dependencies(universal_teleop_genpy universal_teleop_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS universal_teleop_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/universal_teleop)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/universal_teleop
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(universal_teleop_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/universal_teleop)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/universal_teleop
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(universal_teleop_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/universal_teleop)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/universal_teleop
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(universal_teleop_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/universal_teleop)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/universal_teleop
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(universal_teleop_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/universal_teleop)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/universal_teleop\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/universal_teleop
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(universal_teleop_generate_messages_py std_msgs_generate_messages_py)
endif()
