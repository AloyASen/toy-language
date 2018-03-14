#Minimum version of CMake to build this project
cmake_minimum_required(VERSION 2.6)

# Declaration et nommage du projet
project(parser)

set(CXX "clang++")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "001m")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(LIB_VERSION_STRING ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})

# set_target_properties(${PROGRAM_NAME} PROPERTIES VERSION ${LIB_VERSION_STRING})
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -W -Werror -pedantic -g")
set(CMAKE_CXX_FLAGS "-O3 -Wall -W -pedantic -std=c++11")

#Defines subdirectory
add_subdirectory(compiler/)
