vect
vector
vec*tor
//vec*tor
//  main.cpp
//  cpp
//  Created by Jinshi-Li on 7/24/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//system headers
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "cppConfig.h"
#include <climits>

//
//#include <boost/container/vector.hpp>
//#include <boost/container/string.hpp>
//using namespace std;

void print_projectinfo(int argc, const char* argv[])
{
    if (argc < 2) {
        // report version
        std::cout
            << "The project name = "
            << cpp_PROJECT_NAME << std::endl;

        std::cout
                << "The project VERSION = "
                << cpp_VERSION << std::endl;

        std::cout
                //<< argv[0]
                << "The cpp PROJECT_VERSION_MAJOR  = " << cpp_VERSION_MAJOR << std::endl;

        std::cout
                << "The cpp PROJECT_VERSION_MINOR = "
                << cpp_VERSION_MINOR << std::endl;
        std::cout
                << "Usage: "
                //<< argv[0]
                << " number" << std::endl;
    }
}

//application headers
#include<vector>
#include "until/my_vector.h"
#include "until/tree_node.h"
#include "until/toy_tree.h"
#include "until/test_space.hpp"

int main(int argc, const char * argv[])
{
    print_projectinfo(argc, argv);
    //std::vector<int> vect{1,2,3,4,5};
    //toy_tree tt;

    tree_node a{10, nullptr, nullptr, nullptr};

    auto b = a;

    std::cout << "End of the program!!!" << std::endl;
    return 0;
}
//NOT staged -> added this for stash test, not added to stage!!!
//STAGED -> added this for stash 
