//
//  solution.hpp
//  validParantheses
//
//  Created by Skanda Bharadwaj on 23/03/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef solution_hpp
#define solution_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Solution {
public:
    enum PARANTHESE{
        FLOWER_OPEN,
        SQUARE_OPEN,
        ROUND_OPEN,
        FLOWER_CLOSE,
        SQUARE_CLOSE,
        ROUND_CLOSE,
        NONE
    };
    PARANTHESE paranthesesHash(const char p);
    bool isValid(std::string s);
    
};
#endif /* solution_hpp */
