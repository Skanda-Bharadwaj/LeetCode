//
//  main.cpp
//  longestSubstringWithoutRepetition
//
//  Created by Skanda Bharadwaj on 17/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main() {
    Solution s;
    string a = "abcbeacbbc";
    
    int length = s.lengthOfLongestSubstring(a);
    
    cout << length << '\n';
    return 0;
}
