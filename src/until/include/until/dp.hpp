//
//  dp.hpp
//  cpp
//
//  Created by Jinshi-Li on 7/31/20.
//  Copyright © 2020 Jinshi-Li. All rights reserved.
//

#ifndef dp_hpp
#define dp_hpp
#include "project_etc.hpp"
class dp
{
private:
    size_t size;
    std::vector<int>* mem;
    
public:
    explicit dp(size_t n) : size{n+1}, mem{new std::vector<int>(size, 0)}
    {
        //printf("dp cotr\n");
    }

    //make sure the default ctor does the right thing
    dp() : size{0}, mem{nullptr}
    {};
    
    ~dp()
    {
        //printf("Destructor dp\n");
        if(mem) delete mem;
    }
    
    /*
        initial form of Top-down for Fibonacci number
        - repeated calculation for the same number
    */
    int fib(int n)
    {
        if(n <= 1)
            return n;
        return fib(n-1) + fib(n-2);
    }
    
    /*
        fib number with a vector to memeber what's has been calculated
     */
    int fib_mem(int n)
    {
        if(n <= 1)
            return n;
        
        if(mem->at(n) != 0)
            return mem->at(n);
        
        else
        {
            mem->at(n) = fib_mem(n-1) + fib_mem(n-2);
        }
        return mem->at(n);
    }
    
    //return the logest common substring
    /*
     Number of combinations with 2 elements are nC2 and so forth and so on. We know that nC0 + nC1 + nC2 + … nCn = 2n. So a string of length n has 2n-1 different possible subsequences since we do not consider the subsequence with length 0.
     */
    int lcs(std::string& x, std::string& y)
    {
        if(x.size() == 0 || y.size() == 0) return 0;
        //we need extra size for the LCS table, the very top left side of the table
        auto x_size = x.size() + 1;
        auto y_size = y.size() + 1;
        std::vector<std::vector<int>> vect_2d(x_size, std::vector<int>(y_size, 0));
        
        for(size_t o = 0; o < x_size; ++o)
        {
            for(size_t i = 0; i < y_size; ++i)
            {
                if( o == 0 || i == 0)
                {
                    vect_2d.at(o).at(i) = 0;
                }
                else if(x.at(o-1) == y.at(i-1))
                {
                    vect_2d.at(o).at(i) = vect_2d.at(o-1).at(i-1) + 1;
                }
                else
                {
                    auto max = [&]() -> int
                    {
                        auto x = vect_2d.at(o-1).at(i);
                        auto y = vect_2d.at(o).at(i-1);
                        if(x < y)
                        {
                            return y;
                        }
                        else
                        {
                            return x;
                        }
                    };
                    vect_2d.at(o).at(i) = max();
                }
            }
        }
        return vect_2d.at(x_size-1).at(y_size-1);
    }
};
#endif /* dp_hpp */
