//
//  node.cpp
//  cpp
//
//  Created by Jinshi-Li on 7/26/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#include "until/node.hpp"
#include <cstdio>
node::~node()
{
    //printf("Destructor of NODE\n");
}

node::node(int arg_data, node* arg_next)
  :data{arg_data}, next{arg_next}
{
  printf("This the contr of the node class");
}
