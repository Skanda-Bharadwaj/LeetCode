//
//  solution.cpp
//  3SumClosest
//
//  Created by Skanda Bharadwaj on 07/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int Solution::threeSumClosest(vector<int>& nums, int target){
    
    // Get the length of the vector
    int numsLen = (int)nums.size();
    
    // Sort them
    sort(nums.begin(), nums.end());
    
    // Initialize required variables
    int left = 0, right = 0, sum = 0;
    int closestDistance = INT_MAX, distance = 0, closestSum = 0;
    
    // Loop throught he vector
    for(int i=0; i < numsLen-2; i++){
        
        // Skip repeating numbers
        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }
        
        // Have 2 more pointers left & right along with i
        left = i + 1;
        right = numsLen - 1;
        
        // Loop through elements between i and right
        while(left < right){
            
            // calculate the sum
            sum = nums[i] + nums[left] + nums[right];
            
            // if sum == target return
            if(sum == target) return sum;
            
            // Find the distance between sum and target
            distance = abs(target - sum);
            
            // if distance is lesser than previous, update
            if(distance < closestDistance){
                closestSum = sum;
                closestDistance = distance;
            }
            
            // if sum > target, reduce sum by moving left
            if(sum > target) right--;
            // if sum < target, increase sum by moving right
            else left++;
            
            // in both cases we need to reduce the distance
        }
        
    }
    return closestSum;
}
