# Install script for directory: /home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/src/sim_scorbot_master

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sim_scorbot_master/msg" TYPE FILE FILES
    "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/src/sim_scorbot_master/msg/JointVelocities.msg"
    "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/src/sim_scorbot_master/msg/TrajectoryPoint.msg"
    "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/src/sim_scorbot_master/msg/JointTrajectory.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sim_scorbot_master/cmake" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/build/sim_scorbot_master/catkin_generated/installspace/sim_scorbot_master-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/devel/include/sim_scorbot_master")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/devel/share/roseus/ros/sim_scorbot_master")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/devel/share/common-lisp/ros/sim_scorbot_master")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/devel/share/gennodejs/ros/sim_scorbot_master")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/devel/lib/python3/dist-packages/sim_scorbot_master")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/devel/lib/python3/dist-packages/sim_scorbot_master")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/build/sim_scorbot_master/catkin_generated/installspace/sim_scorbot_master.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sim_scorbot_master/cmake" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/build/sim_scorbot_master/catkin_generated/installspace/sim_scorbot_master-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sim_scorbot_master/cmake" TYPE FILE FILES
    "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/build/sim_scorbot_master/catkin_generated/installspace/sim_scorbot_masterConfig.cmake"
    "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/build/sim_scorbot_master/catkin_generated/installspace/sim_scorbot_masterConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/sim_scorbot_master" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/modelo_scorbot_gazebo/src/sim_scorbot_master/package.xml")
endif()

