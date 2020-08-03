//
//  node.hpp
//  cpp
//
//  Created by Jinshi-Li on 7/26/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#ifndef node_hpp
#define node_hpp

#include <iostream>
struct node
{
    int data;
    node* next;
    node()=delete;
    ~node();
    operator int () const
    {
        return data;
    }
    operator node*() const
    {
        return next;
    }
};
#endif /* node_hpp */
