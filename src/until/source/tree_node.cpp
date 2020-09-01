//
// Created by toy on 8/26/20.
//

#include "until/tree_node.h"
tree_node::tree_node(int arg_data, tree_node * arg_left_child,
                     tree_node * arg_right_child, tree_node * arg_parent)
                     : data{arg_data}, left_child{arg_left_child}, right_child{arg_right_child}, parent{arg_parent}{

}