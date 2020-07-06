//
//  solution.cpp
//  integerToRoman
//
//  Created by Skanda Bharadwaj on 05/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

string Solution::getRoman(int num){
    if(num ==    1) return "I";
    if(num ==    5) return "V";
    if(num ==   10) return "X";
    if(num ==   50) return "L";
    if(num ==  100) return "C";
    if(num ==  500) return "D";
    if(num == 1000) return "M";
    
    return "";
}

string Solution::intToRoman(int num){
    
    // Declare required variables
    string roman = "";
    int base = 0, multFactor = 0;
    
    
    while(num > 0){
        
        // Going from left to right.
        base = pow(10, (int)log10(num));
        multFactor = (int)num/base;
        num -= multFactor*base;
        
        // Special cases 4 & 9
        if(multFactor == 4){
            roman += getRoman(base);
            roman += getRoman(5*base);
        }
        else if (multFactor == 9){
            roman += getRoman(base);
            roman += getRoman(10*base);
        }
        
        // Otherwise
        else{
            // Take care of 5
            if(multFactor >= 5){
                roman += getRoman(5*base);
                multFactor -= 5;
            }
            
            // otherwise
            for(int i=0; i < multFactor; i++)
                roman += getRoman(base);
        }
        
    }
    return roman;
}
