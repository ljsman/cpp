project(test)

add_library(test_lib
        source/test.cpp)

target_include_directories(test_lib PUBLIC include)
