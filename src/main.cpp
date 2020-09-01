//
//  main.cpp
//  cpp
//  Created by Jinshi-Li on 7/24/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.

#include <iostream>
#include <stdio.h>
#include "cppConfig.h"
#include "until/test_space.hpp"

using namespace std;
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
    string str;
    while(cin >> str)
    {
        cout << str;
    }
    //test_space ts;
    //ts.test_lcs();
    std::cout << "End of the program!!!" << std::endl;
    return 0;
}
