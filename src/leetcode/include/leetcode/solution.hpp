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

using int_vect = std::vector<int>;
using vect_2d = std::vector<std::vector<int>>;

class solution
{
public:
    virtual void solve();
    solution();
};
#endif /* solution_hpp */
