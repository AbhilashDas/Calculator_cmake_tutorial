cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)

# Set variables
set(SOURCE_FILES ${PROJECT_SOURCE_DIR}/source)
set(HEADER_FILES ${PROJECT_SOURCE_DIR}/header)

if(CMAKE_COMPILER_IS_GNUCC)
	add_definitions(-std=c++11)
endif()

# Create an executable 
add_executable(Calculator
	${HEADER_FILES}/ICalculator.h
	${HEADER_FILES}/Addition.h
	${HEADER_FILES}/Division.h
	${HEADER_FILES}/Multiplication.h
	${HEADER_FILES}/Substraction.h
	
	${SOURCE_FILES}/main.cpp
	${SOURCE_FILES}/Addition.cpp
	${SOURCE_FILES}/Division.cpp
	${SOURCE_FILES}/Multiplication.cpp
	${SOURCE_FILES}/Substraction.cpp
	)

# include directories
include_directories( ${PROJECT_SOURCE_DIR}/header)

set_target_properties(
		Calculator
		PROPERTIES
			DEBUG_POSTFIX "d"
		)