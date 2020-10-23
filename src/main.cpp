//  main.cpp
//  cpp
//  Created by Jinshi-Li on 7/24/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//system headers
#include <iostream>
#include <fstream>
#include <cstdio>
#include "cppConfig.h"
#include <climits>
//#include <boost/container/vector.hpp>
//#include <boost/container/string.hpp>

void print_project_info(int argc, const char* argv[])
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
#include "virtual_ctor_design.h"
int main(int argc, const char * argv[])
{
    print_project_info(argc, argv);

    Derived d{101, 102};
    Base* base = (Base*) (&d);
    //Base* base = new Base{100};
    //std::unique_ptr<Base> uptr (d.get_base());
    //virtual_ctor_design::copy_from_base_ptr( uptr);
    virtual_ctor_design::copy_from_base_ptr(d.get_base());
    return 0;
}
//End of program
