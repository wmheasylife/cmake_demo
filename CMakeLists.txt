# 父目录下的CMakeLists.txt
cmake_minimum_required(VERSION 3.10.2)
project(test)

include_directories(sub)
add_subdirectory(sub output) 

add_executable(test main.cpp)
add_executable(lambda_map lambda_map.cpp)
add_executable(use_string_any use_string_any.cpp)
add_executable(suffix_number suffix_number.cpp)

target_link_libraries(test sub)
