//
//  solution.hpp
//  4Sum
//
//  Created by Skanda Bharadwaj on 03/08/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef solution_hpp
#define solution_hpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target);
    void threeSum(vector<int>& nums, vector<vector<int>>& sum3, int numsLen, int target, int start);
};
#endif /* solution_hpp */
