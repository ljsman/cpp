//
//  dice_roll.hpp
//  cpp
//
//  Created by Jinshi-Li on 7/31/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#ifndef dice_roll_hpp
#define dice_roll_hpp
#include "leetcode/solution.hpp"

struct dr_test
{
    int n;
    int_vect data;
};

class dice_roll : solution
{
    int dieSimulator(int n, int_vect& rollMax)
    {
        auto size = rollMax.size();
        //row represents the number of rolls
        //col represents the constraints
        vect_2d rolls_con(n+1, std::vector<int>(size+1, 0));
        
        rolls_con.at(0).at(size) = 1;
        return 0;
    }
    
    virtual void solve()
    {
        std::vector<dr_test> tests;
        tests.push_back({2, {1,1,2,2,2,3}});
        printf("dice roll solution impl\n");
        for(int counter = 0; counter < tests.size(); ++counter)
        {
            printf("The result is %d", dieSimulator(tests.at(counter).n, tests.at(counter).data));
        }
    }
};
#endif /* dice_roll_hpp */
