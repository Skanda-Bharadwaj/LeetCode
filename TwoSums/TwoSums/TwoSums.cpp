//
//  TwoSums.cpp
//  TwoSums
//
//  Created by Skanda Bharadwaj on 10/09/19.
//  Copyright © 2019 Skanda Bharadwaj. All rights reserved.
//

#include "TwoSums.hpp"

std::vector<int> Solution::twosums(std::vector<int>& nums, int target)
{
    std::unordered_map<int, int> hashMap;
    for(int i=0; i<nums.size(); i++)
    {
        if(hashMap.find(target-nums[i]) != hashMap.end())
            return std::vector<int>{i, hashMap[target-nums[i]]};
        else
            hashMap[nums[i]] = i;
    }
    return std::vector<int>();
}
