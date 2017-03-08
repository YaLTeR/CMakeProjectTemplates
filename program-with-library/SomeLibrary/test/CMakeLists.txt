add_executable(library_test library_test.cpp catch.hpp)
target_link_libraries(library_test ${PROJECT_NAME})
set_target_properties(library_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

add_test(library_test library_test)
