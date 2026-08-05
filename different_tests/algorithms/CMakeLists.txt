cmake_minimum_required(VERSION 3.28)
project(Algorithms LANGUAGES CXX)


add_executable(main main.cpp)
target_compile_features(main PRIVATE cxx_std_20)