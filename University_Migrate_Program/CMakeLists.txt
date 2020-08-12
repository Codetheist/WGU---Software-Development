# cmake_minimum_required(VERSION <specify CMake version here>)
project(University_Migrate_Program)

set(CMAKE_CXX_STANDARD 17)

add_executable(University_Migrate_Program main.cpp degree.h roster.h student.h student.cpp roster.cpp)