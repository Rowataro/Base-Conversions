cmake_minimum_required (VERSION 3.0.0)
project(Converting_bases)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

set(EXECUTABLE_OUTPUT_PATH ./${CMAKE_BUILD_TYPE})
add_executable(${PROJECT_NAME} ${SOURCES})
