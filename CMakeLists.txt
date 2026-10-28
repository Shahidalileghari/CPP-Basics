cmake_minimum_required(VERSION 3.20)
project(cpp_milestone VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp_milestone projects/milestone/main.cpp)
target_compile_options(cpp_milestone PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall;-Wextra;-Wpedantic>
)

enable_testing()
add_executable(cpp_milestone_tests tests/test_milestone.cpp)
target_compile_options(cpp_milestone_tests PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall;-Wextra;-Wpedantic>
)
add_test(NAME milestone_tests COMMAND cpp_milestone_tests)
