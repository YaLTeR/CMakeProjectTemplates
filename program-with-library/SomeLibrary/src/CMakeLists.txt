set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include/${PROJECT_NAME})

set(SOURCE_FILES my_function.cpp)
set(HEADER_FILES ${INCLUDE_DIR}/my_function.hpp)

add_library(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})
target_include_directories(${PROJECT_NAME} PRIVATE
	$<BUILD_INTERFACE:${INCLUDE_DIR}>
	$<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_include_directories(${PROJECT_NAME} PUBLIC
	$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>)
