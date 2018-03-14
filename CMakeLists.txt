#Minimum version of CMake to build this project
cmake_minimum_required(VERSION 2.6)

# Declaration et nommage du projet
project(parser)

set(CXX "clang++")

#the versioning of the release tools that the system is to provide 
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "001m")
set(CPACK_PACKAGE_VERSION_PATCH "0")


# The version number shown by the parser software that matters.
set (PARSE_VERSION_MAJOR "0")
set (PARSE_VERSION_MINOR "001a")
set (PARSE_VERSION_PATCH "0")
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/VersionConfig.h.in"
  "${PROJECT_BINARY_DIR}/VersionConfig.h"
)

set(LIB_VERSION_STRING ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})

# set_target_properties(${PROGRAM_NAME} PROPERTIES VERSION ${LIB_VERSION_STRING})
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -W -Werror -pedantic -g")
set(CMAKE_CXX_FLAGS "-O3 -Wall -W -pedantic -std=c++11")

#Defines subdirectory
add_subdirectory(compiler/)
