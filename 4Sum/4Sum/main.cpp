//
//  main.cpp
//  4Sum
//
//  Created by Skanda Bharadwaj on 03/08/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main() {
    
    Solution s;
    
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(-2);
//    nums.push_back(2);
    
    int target = 0;
    vector<vector<int>> res = s.fourSum(nums, target);
    
    for(auto ele:res){
        cout << "[";
        for(auto e:ele)
            cout << e << ", ";
        cout << "]" << '\n';
    }
    return 0;
}
