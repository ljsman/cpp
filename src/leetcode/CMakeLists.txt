
project(leetcode)
add_library(leetcode_lib
        source/dice_roll.cpp
        source/solution.cpp
            )
#project(leetcode)
#include_directories(.)
#include_directories(include)
#include_directories(source)
#
#add_executable(leetcode
#        source/dice_roll.cpp
#        source/solution.cpp
#        )

target_include_directories(leetcode_lib PUBLIC include)