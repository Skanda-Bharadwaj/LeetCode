//
//  main.cpp
//  TwoSums
//
//  Created by Skanda Bharadwaj on 10/09/19.
//  Copyright © 2019 Skanda Bharadwaj. All rights reserved.
//

#include <iostream>
#include "TwoSums.hpp"

int main()
{
    
    Solution twoSums;
    std::vector<int> nums{0, 2, 6, 8, 14, 2, 7, 11, 15};
    std::vector<int> res = twoSums.twosums(nums, 9);
    
    for(auto &element:res)
        std::cout << element << '\n';
    return 0;
}
