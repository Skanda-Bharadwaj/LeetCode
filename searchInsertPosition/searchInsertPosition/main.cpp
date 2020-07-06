//
//  main.cpp
//  searchInsertPosition
//
//  Created by Skanda Bharadwaj on 29/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include <iostream>
#include "solution.hpp"

int main() {
    Solution s;
    
    vector<int> nums;
    
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    
    int target = 7;
    
    int index = s.searchInsert(nums, target);
    cout << "index: " << index << '\n';
    return 0;
}
