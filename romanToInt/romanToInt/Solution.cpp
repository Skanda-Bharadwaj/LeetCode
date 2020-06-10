//
//  Solution.cpp
//  romanToInt
//
//  Created by Skanda Bharadwaj on 10/02/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "Solution.hpp"

int Solution::getInteger(string romanNumeral){
    int integer=0;
    string_code rNumeral = string_hash(romanNumeral);
    switch(rNumeral){
            case I:
                integer = 1;
                break;
            case V:
                integer = 5;
                break;
            case X:
                integer = 10;
                break;
            case L:
                integer = 50;
                break;
            case C:
                integer = 100;
                break;
            case D:
                integer = 500;
                break;
            case M:
                integer = 1000;
                break;
            default:
                std::cout << "Error" << '\n';
                break;
        }
    
    return integer;
}

Solution::string_code Solution::string_hash(string const& s){
    if (s == "I") return I;
    if (s == "V") return V;
    if (s == "X") return X;
    if (s == "L") return L;
    if (s == "C") return C;
    if (s == "D") return D;
    if (s == "M") return M;
    return NONE;
}

int Solution::romanToInt(string s) {
    string romanNumeral;
    int prevInteger=0, currInteger=0, integer=0;
    
    for(int i=0; i<s.length(); i++){
        romanNumeral = s[i];
        currInteger = getInteger(romanNumeral);
        if(currInteger > prevInteger){
            integer = integer-prevInteger;
            currInteger = currInteger-prevInteger;
            integer = integer+currInteger;
        }
        else{
            integer = integer+currInteger;
        }
        prevInteger = currInteger;
    }
    return integer;
}
