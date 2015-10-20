cmake_minimum_required(VERSION 3.0)

project(assimp_test)

add_executable(assimp_sizes
  assimp_sizes.cpp)

# why isn't this searched by default on unix?
target_include_directories(assimp_sizes
  PRIVATE /usr/local/include)
