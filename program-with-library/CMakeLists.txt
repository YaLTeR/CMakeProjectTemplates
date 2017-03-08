cmake_minimum_required(VERSION 3.1)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

if (BUILD_TESTS)
	enable_testing()
endif()

add_subdirectory(SomeLibrary)
add_subdirectory(Program)
