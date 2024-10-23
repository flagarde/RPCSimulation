cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

project(RPCSimulation LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/install" CACHE PATH "Install path prefix." FORCE)
endif()

include(FetchContent)
FetchContent_Declare(Garfield++ GIT_REPOSITORY https://gitlab.cern.ch/garfield/garfieldpp.git GIT_TAG master GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(Garfield++)

message(STATUS "dddddddd ddddv  ${garfield++_SOURCE_DIR}")

add_subdirectory(src)

add_subdirectory(examples)