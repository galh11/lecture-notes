cmake_minimum_required(VERSION 3.0.0)
project(cpp_test VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

 
set(MTM_FLAGS_DEBUG " --pedantic-errors -Wall -Werror")
set(MTM_FLAGS_REALSE "${MTM_FLAGS_DEBUG} -DNDEBUG")

set(CMAKE_CXX_FLAGS ${MTM_FLAGS_DEBUG})

set(FILES main.cpp WaterBender.cpp printingLib.cpp WaterBender.h printingLib.h flag_generator.cpp flag_generator.h)
add_executable(cpp_test ${FILES})