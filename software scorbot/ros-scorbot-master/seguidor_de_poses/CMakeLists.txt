cmake_minimum_required(VERSION 2.8.3)
project(seguidor_de_poses)

# check c++11
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "-std=c++11")
else()
    message(FATAL_ERROR "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

find_package(catkin REQUIRED COMPONENTS roscpp control_msgs)
#include_directories(${catkin_INCLUDE_DIRS})

catkin_package(
  CATKIN_DEPENDS roscpp control_msgs
  DEPENDS ${LIBS}
)

###########
## Build ##
###########

add_executable ( seguidor src/nodo_seguidor.cpp src/Seguidor.cpp )

target_link_libraries ( seguidor ${catkin_LIBRARIES} )
