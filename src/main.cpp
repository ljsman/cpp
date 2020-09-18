//
//  main.cpp
//  cpp
//  Created by Jinshi-Li on 7/24/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.

#include <iostream>
#include <fstream>
#include <stdio.h>
#include "cppConfig.h"
#include "until/test_space.hpp"
#include <climits>
#include "until/my_vector.h"
#include "until/toy_tree.h"
//
//#include <boost/container/vector.hpp>
//#include <boost/container/string.hpp>
//using namespace std;

struct Node
{
    int data;
    int* ptr;
    Node() : data{0}, ptr{ &data }
    {
        cout << "This is Node default cotr" << endl;
    }
    Node(int tmp) : data{ tmp }, ptr{ &data }
    {
        cout << "This is the Node cotr" << endl;
    }
    ~Node()
    {
        cout << "This is the Node Destructor" << endl;
    }
};

struct Node_0: public Node
{
    int data;
    int* ptr;
    Node_0() : data{ 0 }, ptr{&data}
    {
        cout << "This is Node_0 default ctor" << endl;
    }
    Node_0(int tmp) : data{tmp}, ptr{ &data }
    {
        cout << "This is the Node_0 cotr" << endl;
    }
	~Node_0()
	{
		cout << "This is the Node_0 Destructor" << endl;
	}
};

struct Node_0_drived : virtual Node_0, virtual Node
{
    Node_0_drived(int tmp) : Node{ tmp }, Node_0{tmp}
    {
        cout << "This is the Node_0_drived cotr" << endl;
    }
};

struct Node_1_drived : virtual  Node_0
{
	Node_1_drived(int tmp) : Node_0{ tmp }
	{
		cout << "This is the Node_1_drived cotr" << endl;
	}
};


class me_node : virtual public Node_0_drived //, virtual public Node_1_drived
{
public:
    me_node(int tmp, int tmp0) : Node_0_drived{tmp} //, Node_1_drived{tmp0}
    {
        cout << "This is the me_node cotr" << endl;
    }
};

void print_projectinfo(int argc, const char* argv[])
{
    if (argc < 2) {
        // report version
        std::cout
                << "The project name = "
                << cpp_PROJECT_NAME << endl;

        std::cout
                << "The project VERSION = "
                << cpp_VERSION << endl;

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

template <class ... T>
void template_test(T ... args)
{
    const auto size = sizeof ...(args);
    int res[size] = { args ... };
    for(int i = 0; i < size; ++i)
    {
        cout << res[i] << endl;
    }
}


#include<vector>
int main(int argc, const char * argv[])
{
    print_projectinfo(argc, argv);
    std::vector<int> vect{1,2,3,4,5};
    toy_tree tt{vect};

    std::cout << "End of the program!!!" << std::endl;
    return 0;
}
