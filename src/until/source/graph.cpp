//
//  graph.cpp
//  cpp
//
//  Created by Jinshi-Li on 7/24/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//
#include "until/graph.hpp"
//std::move needs to be implemented carefully, otherwise it will be treated as lvalue reference overloaded funciton.
graph::graph(int arg_vertices, std::vector<std::vector<int>>&& arg_edges)
{
    this->vertices = std::make_shared<std::vector<int>>(arg_vertices);
    std::fill(std::begin(*vertices), std::end(*vertices), -1);
    this->edges = move(arg_edges);
    puts("graph Constructor");
}

graph::graph(const graph& tmp)
: vertices{tmp.vertices}, edges(tmp.edges)
{
    puts("Graph Copy Constructor");
}

graph& graph::operator = (const graph& tmp)
{
    this->vertices = tmp.vertices;
    this->edges = tmp.edges;
    puts("Graph Copy Assignment");
    return *this;
}

graph& graph::operator = (graph&& tmp)
{
    this->vertices = tmp.vertices;
    this->edges = tmp.edges;
    puts("Graph Move Assignment");
    return *this;
}

graph::graph(graph&& tmp)
: vertices{tmp.vertices}, edges(tmp.edges)
{
    puts("Graph Move Constructor");
}

//void graph::_fill()
//{
//    for(auto& vect : this->edges)
//    {
//        std::fill(std::begin(vect), std::end(vect), -1);
//    }
//}

//find the first -1 in the vector of vertax
int graph::_find(int pos)
{
    if(this->vertices->at(pos) == -1) return pos;
    return _find(this->vertices->at(pos));
}

//bringing the new vertax to the set
void graph::_union(int x, int y)
{
    int found_v = _find(x);
    int found_u = _find(y);
    
    if(found_v != found_u)
        vertices->at(found_v) = found_u;
}

bool graph::has_cycle()
{
    auto size = this->edges.size();
    //going over the two vertexis, in an edge
    for(int counter = 0; counter < size; ++counter)
    {
        int v = this->_find(edges.at(counter).at(0));
        int u = this->_find(edges.at(counter).at(1));
        
        if(v == u) return 1;
        
        _union(v, u);
    }
    return false;
}
