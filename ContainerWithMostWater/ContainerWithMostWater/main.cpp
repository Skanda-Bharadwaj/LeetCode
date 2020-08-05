//
//  main.cpp
//  ContainerWithMostWater
//
//  Created by Skanda Bharadwaj on 04/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main() {
    
    Solution s;
    vector<int> height;
    
    height.push_back(1);
    height.push_back(8);
    height.push_back(6);
    height.push_back(2);
    height.push_back(5);
    height.push_back(4);
    height.push_back(8);
    height.push_back(3);
//    height.push_back(7);
    
    int maxWater = s.maxArea(height);
    cout << maxWater << '\n';
    
    return 0;
}
