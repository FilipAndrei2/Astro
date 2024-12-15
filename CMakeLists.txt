cmake_minimum_required(VERSION 3.31)

project(Astro VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

file(GLOB_RECURSE SOURCES "src/*.cpp")
message(STATUS "Fisiere sursa: ${SORUCES}")

file(GLOB_RECURSE TESTS "tests/*.cpp")
message(STATUS "Teste: ${TESTS}")

file(GLOB_RECURSE HEADERS_H "include/*.h")
file(GLOB_RECURSE HEADERS_HPP "include/*.hpp")
message(STATUS "Headere: ${HEADERS} ${HEADERS_HPP}")

add_executable(Astro ${SOURCES})
target_include_directories(Astro PUBLIC ${CMAKE_SOURCE_DIR}/include)



add_executable(tests ${TESTS})

add_test(NAME tests COMMAND tests)