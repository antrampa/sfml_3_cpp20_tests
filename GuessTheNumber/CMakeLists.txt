cmake_minimum_required(VERSION 3.28)

project(GuessTheNumber CXX)

add_executable(guessTheNumber main.cpp)

target_compile_features(guessTheNumber PRIVATE cxx_std_20)

