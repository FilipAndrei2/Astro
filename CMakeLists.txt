cmake_minimum_required(VERSION 3.31)

project(Astro VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE TESTS "tests/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.{h,hpp}")
add_executable(Astro ${SOURCES})
target_include_directories(Astro PUBLIC ${HEADERS})



add_executable(tests ${TESTS})

add_test(NAME tests COMMAND tests)