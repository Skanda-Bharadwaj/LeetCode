//
//  Solution.hpp
//  romanToInt
//
//  Created by Skanda Bharadwaj on 10/02/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef Solution_hpp
#define Solution_hpp

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    enum string_code {
        I,
        V,
        X,
        L,
        C,
        D,
        M,
        NONE
    };
    
    string_code string_hash(string const& s);
    int getInteger(string romanNumeral);
    int romanToInt(string s);
};
#endif /* Solution_hpp */
