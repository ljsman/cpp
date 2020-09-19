//
// Created by toy on 8/26/20.
//

#ifndef CPP_TREE_NODE_H
#define CPP_TREE_NODE_H


class tree_node {
public:
    int data;
    tree_node* left_child;
    tree_node* right_child;
    tree_node* parent;
public:
    tree_node(int, tree_node*, tree_node*, tree_node*);
    tree_node(int&, tree_node*, tree_node*);
    tree_node() = delete;
    ~tree_node();
};


#endif //CPP_TREE_NODE_H
