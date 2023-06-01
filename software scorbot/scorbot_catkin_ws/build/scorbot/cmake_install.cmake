# Install script for directory: /home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/src/scorbot

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scorbot/msg" TYPE FILE FILES
    "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/src/scorbot/msg/JointVelocities.msg"
    "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/src/scorbot/msg/TrajectoryPoint.msg"
    "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/src/scorbot/msg/JointTrajectory.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scorbot/cmake" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/build/scorbot/catkin_generated/installspace/scorbot-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/devel/include/scorbot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/devel/share/roseus/ros/scorbot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/devel/share/common-lisp/ros/scorbot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/devel/share/gennodejs/ros/scorbot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/devel/lib/python3/dist-packages/scorbot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/devel/lib/python3/dist-packages/scorbot")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/build/scorbot/catkin_generated/installspace/scorbot.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scorbot/cmake" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/build/scorbot/catkin_generated/installspace/scorbot-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scorbot/cmake" TYPE FILE FILES
    "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/build/scorbot/catkin_generated/installspace/scorbotConfig.cmake"
    "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/build/scorbot/catkin_generated/installspace/scorbotConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/scorbot" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/software scorbot/catkin_ws/src/scorbot/package.xml")
endif()

