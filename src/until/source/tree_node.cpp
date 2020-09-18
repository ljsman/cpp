//
// Created by toy on 8/26/20.
//

#include "until/tree_node.h"
#include <stdio.h>
tree_node::tree_node(int arg_data, tree_node * arg_left_child,
                     tree_node * arg_right_child, tree_node * arg_parent)
                     : data{arg_data}, left_child{arg_left_child}, right_child{arg_right_child}, parent{arg_parent}
{
	printf("Special ctor for tree_node(int, node*, node*, node*)\n");
}

tree_node::tree_node(const int& arg_data, const tree_node* arg_left_child,
	const tree_node* arg_right_child)
	: data{ arg_data }, left_child{ arg_left_child }, right_child{ arg_right_child }, parent{nullptr}
{
	printf("Special ctor for tree_node(int, node*, node*)\n");
}