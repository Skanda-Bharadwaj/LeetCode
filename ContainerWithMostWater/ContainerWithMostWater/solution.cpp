//
//  solution.cpp
//  ContainerWithMostWater
//
//  Created by Skanda Bharadwaj on 04/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int Solution::maxArea(vector<int>& height){

    int maxWater = 0, water = 0;
    int i = 0, j = (int)height.size() - 1;
    
    while(i < j && j > i){
        water = (j-i) * min(height[i], height[j]);
        if(water > maxWater)
            maxWater = water;
        
        height[i] < height[j] ? i++ : j--;
    }
    
    return maxWater;
}
