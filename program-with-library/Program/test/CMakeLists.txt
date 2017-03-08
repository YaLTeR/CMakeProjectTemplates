set(SOURCE_FILES program_test.cpp ${PROJECT_SOURCE_DIR}/src/program.cpp)
set(HEADER_FILES catch.hpp ${PROJECT_SOURCE_DIR}/src/program.hpp)

add_executable(program_test ${SOURCE_FILES} ${HEADER_FILES})
target_include_directories(program_test PRIVATE ${PROJECT_SOURCE_DIR}/src)
target_link_libraries(program_test SomeLibrary)
set_target_properties(program_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

add_test(program_test program_test)
