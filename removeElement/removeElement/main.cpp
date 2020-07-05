//
//  main.cpp
//  removeElement
//
//  Created by Skanda Bharadwaj on 27/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include <iostream>
#include "solution.hpp"

int main() {
    Solution s;

    vector<int> nums;
    
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(0);
    nums.push_back(4);
    nums.push_back(2);
    
    int val = 2;
    
    int length = s.removeElement(nums, val);
    
    cout << "newArray: ";
    for(auto &ele: nums)
        cout << ele << ",";
    
    cout << "\n newArray Length: " << length << '\n';
    return 0;
}
