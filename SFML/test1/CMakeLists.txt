cmake_minimum_required(VERSION 3.28)
project(HelloSFML CXX)

include(FetchContent)
FetchContent_Declare(sfml GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 3.1.0)
FetchContent_MakeAvailable(sfml)

add_executable(HelloSFML Main.cpp)
target_compile_features(HelloSFML PRIVATE cxx_std_20)
target_link_libraries(HelloSFML PRIVATE SFML::Graphics)

