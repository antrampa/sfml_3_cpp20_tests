cmake_minimum_required(VERSION 3.28)

project(Array CXX)

add_executable(array main.cpp)

target_compile_features(array PRIVATE cxx_std_20)


add_executable(max_value max_value.cpp)
target_compile_features(max_value PRIVATE cxx_std_20)


add_executable(reverse reverse.cpp)
target_compile_features(reverse PRIVATE cxx_std_20)