//
//  list.cpp
//  cpp
//
//  Created by Jinshi-Li on 7/26/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#include "until/list.hpp"

list::~list()
{
    printf("Destructor of LIST\n");
}

node* list::get_test()
{
    node* first = new node{1, nullptr};
    //printf("address of first is: %p", &*first);
    node* second = new node{2, first};
    node* third = new node{3, second};
    head = new node{4, third};
    return head;
}

void list::clean_node()
{
    while(head)
    {
        auto next = head->next;
        std::cout << "delecting element " << head->data << std::endl;
        delete head;
        head = next;
    }
}

bool list::remove_node(int data)
{
    auto indirect = &head;
    //node* element = nullptr;
    while((*indirect)->data != data)
    {
        indirect = &(*indirect)->next;
    }
    
    *indirect = (*indirect)->next;
    return true;
}
