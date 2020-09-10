//
//  main.cpp
//  cpp
//  Created by Jinshi-Li on 7/24/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdio.h>
#include "cppConfig.h"
#include "until/test_space.hpp"
#include <climits>

using namespace std;

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


int main(int argc, const char * argv[])
{
    print_projectinfo(argc, argv);

    /*{
        me_node mn(10, 100);
    }*/
    



    char chr0 = 'd';
    char& char_ref = chr0;
    char* char_ptr = &chr0;
    auto size_char = sizeof(chr0);
    auto size_ref = sizeof(char_ref);
    auto size_ptr = sizeof(char_ptr);
   
    printf("The address of chr0 %p\n", &chr0);
    printf("The address of char_ptr %p\n", &char_ptr);
    //test_space ts;
    //ts.test_lcs();
    std::cout << "End of the program!!!" << std::endl;
    return 0;
}
