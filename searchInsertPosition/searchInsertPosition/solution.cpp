//
//  solution.cpp
//  searchInsertPosition
//
//  Created by Skanda Bharadwaj on 29/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int Solution::searchInsert(vector<int>& nums, int target){
        
    int index = 0;
    for(auto &ele : nums){
        if(target <= ele)
            return index;

        index++;
    }
    return index;
}
