cmake_minimum_required(VERSION 3.4)

project(faulthandlerSpam)

set(PYTHON_VERSION 3.6.2)
find_package(PythonInterp ${PYTHON_VERSION})
find_package(PythonLibs ${PYTHON_VERSION})

set(CMAKE_CONFIGURATION_TYPES Release)

add_library(test_module SHARED module.cpp)
set_target_properties(test_module PROPERTIES SUFFIX ".pyd")

message(${PYTHON_INCLUDE_DIR})
include_directories(${PYTHON_INCLUDE_DIR})
target_link_libraries(test_module ${PYTHON_LIBRARY})
