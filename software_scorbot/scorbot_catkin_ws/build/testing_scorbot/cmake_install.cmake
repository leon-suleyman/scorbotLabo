# Install script for directory: /home/lovi/proyectos_robotica/scorbot/scorbotLabo/software_scorbot/scorbot_catkin_ws/src/testing_scorbot

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software_scorbot/scorbot_catkin_ws/install")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software_scorbot/scorbot_catkin_ws/build/testing_scorbot/catkin_generated/installspace/testing_scorbot.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/testing_scorbot/cmake" TYPE FILE FILES
    "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software_scorbot/scorbot_catkin_ws/build/testing_scorbot/catkin_generated/installspace/testing_scorbotConfig.cmake"
    "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software_scorbot/scorbot_catkin_ws/build/testing_scorbot/catkin_generated/installspace/testing_scorbotConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/testing_scorbot" TYPE FILE FILES "/home/lovi/proyectos_robotica/scorbot/scorbotLabo/software_scorbot/scorbot_catkin_ws/src/testing_scorbot/package.xml")
endif()

