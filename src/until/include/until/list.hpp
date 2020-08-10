//
//  list.hpp
//  cpp
//
//  Created by Jinshi-Li on 7/26/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#ifndef list_hpp
#define list_hpp

#include "project_etc.hpp"
class list
{
    node* head;
    
public:
    void clean_node();
    node* get_test();
    ~list();
    bool remove_node(int);
};
#endif /* list_hpp */
