//
//  solution.cpp
//  removeElement
//
//  Created by Skanda Bharadwaj on 27/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"
int Solution::removeElement(vector<int>& nums, int val){
    int len = (int)nums.size();
    
    if(len < 2){
        if(len == 0 || nums[0] == val)
            return 0;
        else
            return 1;
    }

    bool end = false;
    for(int i=0; i<len; i++){
        if(nums[i] == val){
            if(i+1 == len)
                end = true;
            for(int j=i+1; j<len; j++){
                if(nums[j] != nums[i]){
                    nums[i] = nums[j];
                    nums[j] = val;
                    break;
                }
                if(j+1 == len)
                    end = true;
            }
            if(end)
                return i;
        }
    }
    return len;
}
