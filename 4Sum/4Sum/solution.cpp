//
//  solution.cpp
//  4Sum
//
//  Created by Skanda Bharadwaj on 03/08/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"
vector<vector<int>> Solution::fourSum(vector<int>& nums, int target){
    int numsLen = (int)nums.size();
    vector<vector<int>> sum3, sum4;
    sort(nums.begin(), nums.end());
    
    for(int i=0; i < numsLen-3; i++){
        sum3.clear();
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        
        threeSum(nums, sum3, numsLen, target-nums[i], i+1);
        if(sum3.size() > 0){
            for(int j = 0; j < sum3.size(); j++){
                sum3[j].push_back(nums[i]);
                sum4.push_back(sum3[j]);
            }
        }
    }
    return sum4;
}

void Solution::threeSum(vector<int>& nums, vector<vector<int>>& sum3, int numsLen, int target, int start){
    
    int left = start, right = start, sum = 0;
    for(int i=start; i < numsLen-2; i++){
        
        if(i > start && nums[i] == nums[i-1]){
            continue;
        }
        
        left = i + 1;
        right = numsLen - 1;
        
        while(left < right){
            sum = nums[i] + nums[left] + nums[right];
            if(sum < target)
                left++;
            
            else if(sum > target)
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
}
