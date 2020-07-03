//
//  main.cpp
//  implement_strStr
//
//  Created by Skanda Bharadwaj on 27/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include <iostream>
#include "solution.hpp"

int main() {
    Solution s;
    
    string haystack = "hellolll";
    string needle = "lll";
    
    int index = s.strStr(haystack, needle);
    
    cout << "Index: " << index << '\n';
    return 0;
}
