add_library(etc_lib
        source/temp.cpp
        source/virtual_ctor_design.cpp)

target_include_directories(etc_lib
        PUBLIC
        include)