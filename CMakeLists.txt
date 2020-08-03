cmake_minimum_required(VERSION 3.14)
project(cpp)

set(CMAKE_CXX_STANDARD 14)


include_directories(.)
include_directories(src)
include_directories(src/leetcode_problems)
include_directories(src/leetcode_problems/leetcode_cpp)
include_directories(src/leetcode_problems/leetcode_header)
include_directories(src/until)
include_directories(src/until/until_cpp)
include_directories(src/until/until_graph)
include_directories(src/until/until_header)
include_directories(src/etc)

add_executable(cpp
        src/leetcode_problems/leetcode_cpp/dice_roll.cpp
        src/leetcode_problems/leetcode_cpp/solution.cpp
        src/leetcode_problems/leetcode_header/dice_roll.hpp
        src/leetcode_problems/leetcode_header/solution.hpp
        src/until/until_cpp/bfs.cpp
        src/until/until_cpp/dp.cpp
        src/until/until_cpp/list.cpp
        src/until/until_cpp/node.cpp
        src/until/until_cpp/project_etc.cpp
        src/until/until_cpp/test_space.cpp
        src/until/until_cpp/UnionFind.cpp
        src/until/until_graph/graph.cpp
        src/until/until_header/bfs.hpp
        src/until/until_header/dp.hpp
        src/until/until_header/graph.hpp
        src/until/until_header/list.hpp
        src/until/until_header/node.hpp
        src/until/until_header/project_etc.hpp
        src/until/until_header/test_space.hpp
        src/until/until_header/UnionFind.hpp
        src/main.cpp src/etc/temp.cpp src/etc/temp.h)
