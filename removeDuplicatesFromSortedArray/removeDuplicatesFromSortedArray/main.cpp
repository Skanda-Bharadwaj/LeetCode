//
//  main.cpp
//  removeDuplicatesFromSortedArray
//
//  Created by Skanda Bharadwaj on 26/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main() {
    Solution s;
    
    vector<int> num;
    num.push_back(0);
    num.push_back(0);
    num.push_back(1);
    num.push_back(1);
    num.push_back(1);
    num.push_back(2);
    num.push_back(2);
    num.push_back(3);
    num.push_back(3);
    num.push_back(4);
    
    int newLength = s.removeDuplicates(num);
    
    cout << "New Array: ";
    for(auto &ele: num)
        cout << ele << ",";
    
    cout << '\n' << "New Length: " << newLength << '\n';
     
    return 0;
}
