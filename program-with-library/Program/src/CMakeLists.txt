set(SOURCE_FILES program.cpp main.cpp)
set(HEADER_FILES program.hpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(${PROJECT_NAME} SomeLibrary)
