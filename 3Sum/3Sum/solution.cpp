//
//  solution.cpp
//  3Sum
//
//  Created by Skanda Bharadwaj on 05/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

vector<vector<int>> Solution::threeSum(vector<int>& nums){
    int numsLen = (int)nums.size();
    vector<vector<int>> sum3;
    sort(nums.begin(), nums.end());
    
    int left = 0, right = 0, sum = 0;
    for(int i=0; i < numsLen-2; i++){
        
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        
        left = i + 1;
        right = numsLen - 1;
        
        while(left < right){
            sum = nums[i] + nums[left] + nums[right];
            if(sum < 0)
                left++;
            
            else if(sum > 0)
                right --;
            
            else{
                sum3.push_back({nums[i], nums[left], nums[right]});
                
                while(left < right && nums[left] == nums[left+1])
                    left++;
                while(left < right && nums[left] == nums[left+1])
                    right--;
                
                left++;
                right--;
            }
        }
    }
    return sum3;
}
