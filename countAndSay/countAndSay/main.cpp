//
//  main.cpp
//  countAndSay
//
//  Created by Skanda Bharadwaj on 30/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include <iostream>
#include "solution.hpp"

int main() {
    Solution s;
    string myString = s.countAndSay(5);
    
    for(auto &ele: myString)
        cout << ele;
    cout << '\n';
    
    return 0;
}
