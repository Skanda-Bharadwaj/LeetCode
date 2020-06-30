//
//  solution.cpp
//  removeDuplicatesFromSortedArray
//
//  Created by Skanda Bharadwaj on 26/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int Solution::removeDuplicates(vector<int>& nums){
    int length = nums.size();
    if (length < 2)
        return length;
    
    int p1, p2;
    
    for (p2 = 1, p1 = 1; p2 < length && p1 < length; p2++) {
        if (nums[p1-1] != nums[p2])
            nums[p1++] = nums[p2];
    }
    return p1;
}


