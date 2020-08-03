//
//  solution.hpp
//  cpp
//
//  Created by Jinshi-Li on 7/31/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#ifndef solution_hpp
#define solution_hpp

#include <stdio.h>
#include <vector>
#include "project_etc.hpp"
using int_vect = std::vector<int>;
using vect_2d = std::vector<std::vector<int>>;

class solution
{
    virtual void solve()  = 0;
};
#endif /* solution_hpp */
