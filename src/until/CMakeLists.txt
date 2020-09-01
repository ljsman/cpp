#CMamke doc. dont not suggest using file(GLOB) to collect source file in a dir.
#https://cmake.org/cmake/help/latest/command/file.html

add_library(until_lib
                source/bfs.cpp
                source/dp.cpp
                source/graph.cpp
                source/list.cpp
                source/node.cpp
                source/test_space.cpp
                source/UnionFind.cpp
                source/binary_tree.cpp
                source/tree_node.cpp)

target_include_directories(until_lib
                                PUBLIC
                                include)