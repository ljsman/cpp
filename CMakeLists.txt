cmake_minimum_required(VERSION 3.14)
project(cpp VERSION 1.0)
configure_file(cppConfig.h.in cppConfig.h)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#Tell CMake what subdirectories we want look into and build
add_subdirectory(src/leetcode)
add_subdirectory(src/until)
add_subdirectory(src/etc)
add_subdirectory(src/test)

#From main.cpp we can kick-off the project execution
add_executable(cpp
                src/main.cpp
        )

#Linked everything we have built to the executable
target_link_libraries(cpp
                        leetcode_lib
                        until_lib
                        etc_lib
                        test_lib
        )
message("This is the BINARY FILE ${PROJECT_BINARY_DIR}")
message("This is the SOURCE FILE ${PROJECT_SOURCE_DIR}")

target_include_directories(cpp PUBLIC
                            ${PROJECT_BINARY_DIR}
        		    ${PROJECT_SOURCE_DIR}
        )