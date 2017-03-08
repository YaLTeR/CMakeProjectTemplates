cmake_minimum_required(VERSION 3.1)
project(SomeLibrary)

add_subdirectory(src)

if (BUILD_TESTS)
	enable_testing()
	add_subdirectory(test)
endif()
