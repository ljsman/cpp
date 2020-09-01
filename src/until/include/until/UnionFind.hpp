//
//  UnionFind.hpp
//  cpp
//
//  Created by Jinshi-Li on 7/29/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#ifndef UnionFind_hpp
#define UnionFind_hpp

#include <stdio.h>
#include <vector>
#include "project_etc.hpp"

using Edges = std::vector<std::vector<int>>;
class UnionFind
{
    int nodes;
    const Edges& edges;
public:
    UnionFind(const int arg_nodes, const Edges& arg_edge)
      : nodes{arg_nodes}, edges{arg_edge}
    { /*printf("UnionFind ctor\n");*/}
    
    //node is the current node that we are interested to find its root for.
    //vector root stores the root at each node
    int _get_root(int node, std::vector<int>& root)
    {
        //if node == root[node] we have reached the root for the node
        while(node != root[node])
        {
            //go to the new node to see if it is the root
            node = root[root[node]];
        }
        return node;
    }
    
    //compaing roots for two vertax
    bool _find(int u, int v, std::vector<int>& roots)
    {
        return _get_root(u, roots) == _get_root(v, roots);
    }
    
    void _union(int v, int u, std::vector<int>& roots, std::vector<int>& size)
    {
        int root_v = _get_root(v, roots);
        int root_u = _get_root(u, roots);
        
        //alway merge smaller size sets into larger sets
        if(size[root_v] < size[root_u])
        {
            roots[root_v] = roots[root_u];
            size[root_u] += size[root_v];
        }
        else
        {
            roots[root_u] = roots[root_v];
            size[root_v] += size[root_u];
        }
    }
    
    size_t union_find()
    {
        size_t total_connections = edges.size();
        //least number of cables that are needed to keep already connected computer connected
        size_t least = 0;
        //using array offsets to represents all the vertaies and value in roots[i] is the root for that vertax.
        std::vector<int> roots(nodes);
        std::vector<int> size(nodes, 1);
        //to initialized the vector, sets every vertax's root to itself
        for(int counter = 0; counter < this->nodes; ++counter)
        {
            roots[counter] = counter;
        }
        
        for(auto& edge : edges)
        {
#if DEBUG_SET
            printf("Current edge is [%d, %d]\n", edge[0], edge[1]);
#endif
            //if the root for the tow vertax is different
            if(!_find(edge[0], edge[1], roots))
            {
                ++least;
                _union(edge[0], edge[1], roots, size);
            }
        }
        
        //how many nodes are a standalong-set
        int indv_computer = 0;
        for(int i = 0; i < this->nodes; ++i)
        {
            indv_computer = indv_computer + (roots[i] == i);
        }
        
        auto cables = indv_computer - 1;
        
        return total_connections - least >= cables ? cables :  -1;
    }
    
    void test()
    {
        
    }
};
#endif /* UnionFind_hpp */
