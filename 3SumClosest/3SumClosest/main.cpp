//
//  main.cpp
//  3SumClosest
//
//  Created by Skanda Bharadwaj on 07/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main(){
    
    Solution s;
    vector<int> nums;
    
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(10);
//    nums.push_back(11);
    
    int output = s.threeSumClosest(nums, 12);
    
    cout << output << '\n';
    return 0;
}
