cmake_minimum_required(VERSION 3.20)
project(SHA1Example)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(sha1_example src/main.cpp src/SHA1.cpp)
