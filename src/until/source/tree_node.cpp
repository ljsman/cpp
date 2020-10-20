//
// Created by toy on 8/26/20.
//

#include "until/tree_node.h"
#include <stdio.h>
#include <algorithm>
tree_node::tree_node(int arg_data, tree_node * arg_left_child,
                     tree_node * arg_right_child, 
					 tree_node * arg_parent)
	: data{arg_data}, left_child{arg_left_child}, 
	  right_child{arg_right_child}, parent{arg_parent}
{
	printf("Special ctor for tree_node(int, node*, node*, node*)\n");
}

tree_node::tree_node(int& arg_data, tree_node* arg_left_child,
	tree_node* arg_right_child)
	: data{ arg_data }, left_child{ arg_left_child }, right_child{ arg_right_child }, parent{nullptr}
{
	printf("Special ctor for tree_node(int, node*, node*)\n");
}

tree_node::tree_node(const tree_node& tmp)
	: data{ tmp.data }, left_child{ tmp.left_child }, right_child{ tmp.right_child }, parent{tmp.parent}
{
	printf("Copy construct\n");
}

tree_node tree_node::operator = (const tree_node& tmp) 
{
	this->data = tmp.data;
	this->left_child =  tmp.left_child;
	this->right_child = tmp.right_child;
	this->parent = tmp.parent;

	printf("Copy assignment\n");
	
	return *this;
}

tree_node::tree_node(tree_node&& tmp) noexcept
	: data{ std::move(tmp.data) }, left_child{ std::move(tmp.left_child)},
		right_child{ std::move(tmp.right_child) }, parent{ std::move(tmp.parent) }
{
	printf("Move construct\n");
}

tree_node tree_node::operator = (tree_node&& tmp) noexcept
{
	this->data =		std::move(tmp.data);
	this->left_child =	std::move(tmp.left_child);
	this->right_child = std::move(tmp.right_child);
	this->parent =		std::move(tmp.parent);

	printf("Move assignment\n");
	return *this;
}

tree_node::~tree_node()
{

}