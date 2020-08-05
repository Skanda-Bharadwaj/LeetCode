//
//  main.cpp
//  3Sum
//
//  Created by Skanda Bharadwaj on 05/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main() {
    
    Solution s;
    
    vector<int> nums;
    nums.push_back(-2);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(-4);
    
    vector<vector<int>> res = s.threeSum(nums);
    
    for(auto ele:res){
        cout << "[";
        for(auto e:ele)
            cout << e << ", ";
        cout << "]" << '\n';
    }
    return 0;
}
