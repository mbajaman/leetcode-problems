cmake_minimum_required(VERSION 3.30)
project(leetcode_problems)

set(CMAKE_CXX_STANDARD 20)

# Find all cpp files in the problems directory
file(GLOB PROBLEM_SOURCES "problems/*.cpp")

# Add executable with main.cpp and all problem sources
add_executable(leetcode_problems 
    main.cpp
    ${PROBLEM_SOURCES}
)