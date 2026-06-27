cmake_minimum_required(VERSION 3.28)
project(References LANGUAGES CXX)


add_executable(main main.cpp)
target_compile_features(main PRIVATE cxx_std_20)

add_executable(arrays arrays.cpp)
target_compile_features(arrays PRIVATE cxx_std_20)

add_executable(strings strings.cpp)
target_compile_features(strings PRIVATE cxx_std_20)

add_executable(vowels_counter vowels_counter.cpp)
target_compile_definitions(vowels_counter PRIVATE cxx_std_20)
