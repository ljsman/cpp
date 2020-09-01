//
//  graph.hpp
//  cpp
//
//  Created by Jinshi-Li on 7/24/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#ifndef graph_hpp
#define graph_hpp
#include "project_etc.hpp"
#include <memory>
struct edge
{
    int src, des;
};

class graph
{
    std::shared_ptr<std::vector<int>> vertices;
    std::vector<std::vector<int>> edges;
    
    //void _fill();
    int _find(int);
    void _union(int, int);
public:
    graph() = delete;
    graph(const graph&);
    graph& operator = (const graph&);
    graph& operator = (graph&&);
    graph(graph&&);
    //special constructor
    graph(int, std::vector<std::vector<int>>&&);
    bool has_cycle();
    
};
#endif /* graph_hpp */
