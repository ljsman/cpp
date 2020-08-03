//
//  test_space.hpp
//  cpp
//
//  Created by Jinshi-Li on 7/31/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#ifndef test_space_hpp
#define test_space_hpp

#include <iostream>
#include <stdio.h>
#include <vector>
#include "list.hpp"
#include "graph.hpp"
#include "UnionFind.hpp"
#include "dp.hpp"

using namespace std;
struct test_space
{

    void test_linked_list()
    {
        std::vector<std::vector<int>> edge{{0,1}, {1,2}, {0,2}};
        graph gr(3, std::move(edge));
    
        std::cout<<std::boolalpha;
        std::cout<<gr.has_cycle();
        
        list my_list;
        node* head = my_list.get_test();
        while(head != nullptr)
        {
          //std::cout << head->data << std::endl;
          printf("The address of the current head is %p\n", &(*head));
          head = head->next;
        }
    
        //my_list.clean_node();
        my_list.remove_node(2);
    }
    
    void test_union_find()
    {
        vector<vector<int>> edges{{0,1},{0,2},{1,2}};
        vector<vector<int>> edges0
        {{0,1},{0,2},{0,3},{1,2},{1,3}};
        
        UnionFind uf(6, edges0);
        cout<< uf.union_find() << endl;
    }
    
    void test_dp()
    {
        int number = 15;
        dp var_dp(number);
        cout << "Fib number is " << var_dp.fib_mem(number) << endl;
        cout << "Fib number is " << var_dp.fib(number) << endl;
    }
    
    void test_lcs()
    {
        string str {"ABCDGH"};
        string str0 {"AEDFHR"};
        dp var_dp;
        cout << var_dp.lcs(str, str0) << endl;
        
    }
};
#endif /* test_space_hpp */
