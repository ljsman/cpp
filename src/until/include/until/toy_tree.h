#pragma once

#ifndef TOY_TREE_H
#define TOY_TREE_H

#include <stdio.h>
#include "until/tree_node.h"
#include <vector>
class toy_tree
{
	tree_node* head;
	std::vector<tree_node*> ptr_vect;

	tree_node* create_node(int& data, tree_node* left_child, tree_node* right_child)
	{
		return new tree_node(data, left_child, right_child);
	}

	void construct_tree(std::vector<int>& int_array)
	{
		//guard
		if (int_array.empty()) return;

		auto size{int_array.size()};
		int index{0};

		while(index < size)
		{
			//root or subtree root
			auto curr{ int_array.at(index) };
			auto root_subtreeroot = create_node(curr, nullptr, nullptr);
			this->ptr_vect.push_back(root_subtreeroot);

			//check the data being added to node is in range
			if(curr > INT_MIN && curr < INT_MAX)
			{
				auto left_index{2 * index + 1};
				//check and added left child;
				if(left_index < size - 1)
				{
					auto left_child = create_node(int_array.at(left_index), nullptr, nullptr);
					root_subtreeroot->left_child = left_child;
					this->ptr_vect.push_back(left_child);
				}
				auto right_index{ 2 * index + 2 };
				//check and addd right child
				if(right_index < size - 1)
				{
					auto right_child = create_node(int_array.at(right_index), nullptr, nullptr);
					root_subtreeroot->right_child = right_child;
					this->ptr_vect.push_back(right_child);
				}
			}

			++index;
		}
	}

public:
	toy_tree() = delete;
	~toy_tree()
	{
		for(auto itr = std::begin(this->ptr_vect); itr != std::end(this->ptr_vect); ++itr)
		{
			if(*itr)
				delete *itr;
		}
	}
	toy_tree(std::vector<int>& int_vect) : head{}, ptr_vect{}
	{
		printf("Constructing tree...\n");
		construct_tree(int_vect);
	}
};

#endif // TOY_TREE_H
