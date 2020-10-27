#project(cpp)
message("This is the SOURCE FILE IN ETC_LIB ${PROJECT_SOURCE_DIR}")

add_library(etc_lib
        source/temp.cpp
        source/virtual_ctor_design.cpp)

target_include_directories(etc_lib
        PUBLIC
        include)