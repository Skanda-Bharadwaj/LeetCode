//
//  solution.cpp
//  validParantheses
//
//  Created by Skanda Bharadwaj on 23/03/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"
#include <vector>

Solution::PARANTHESE Solution::paranthesesHash(const char p){
    if (p == '{') return FLOWER_OPEN;
    if (p == '[') return SQUARE_OPEN;
    if (p == '(') return ROUND_OPEN;
    if (p == '}') return FLOWER_CLOSE;
    if (p == ']') return SQUARE_CLOSE;
    if (p == ')') return ROUND_CLOSE;
    return NONE;
}

bool Solution::isValid(std::string s){
    
    PARANTHESE currentParantheses, endParantheses = NONE;
    std::vector<char> sCol;
    bool popping = false;
    
    if (s.length() < 2) return false;
    
    for(int i=0; i<s.length(); i++){
        currentParantheses = paranthesesHash(s[i]);
        if((int)currentParantheses > 2)
            popping = true;
        
        if(!popping)
            sCol.push_back(s[i]);
        
        else{
            if(sCol.empty()) return false;
            
            endParantheses = paranthesesHash(sCol.back());
            sCol.pop_back();
            if((int)currentParantheses - (int)endParantheses != 3)
                return false;
            else
                popping = false;
        }
    }
    if (sCol.empty()) return true;
    else return false;
}
