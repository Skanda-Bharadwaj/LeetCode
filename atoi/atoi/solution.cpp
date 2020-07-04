//
//  solution.cpp
//  atoi
//
//  Created by Skanda Bharadwaj on 03/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int Solution::myAtoi(string str){
    int strLength = (int)str.length();
    
    // return if string is empty
    if(strLength == 0) return 0;
    
    bool firstIntFound = false, firstSignFound = false;
    
    // iterate through the string
    for(string::iterator it = str.begin(); it != str.end(); ++it){
        
        // white spaces - allow them until first int/sign is found
        if(*it == ' '){
            if(firstIntFound || firstSignFound) break;
        }
        
        // make sure sign is taken into account only if found once
        else if((*it == '-' || *it == '+') && !firstSignFound){
            if(firstIntFound) break;
            
            firstSignFound = true;
            if(*it == '-')
                intSign = -1;
            if(*it == '+')
                intSign = 1;
        }
        
        // collect ints and put them together
        else if (*it >= '0' && *it <= '9'){
            if(!firstIntFound) firstIntFound = true;
            
            // return if beyond bounds
            if(myInt*10 + (*it - '0') > INT_MAX){
                if(intSign == 1) return INT_MAX;
                if(intSign == -1) return INT_MIN;
            }
            myInt = myInt*10 + (*it - '0');
        }
        
        // break if any other charachter if found
        else{
             break;
        }
        
    }
    
    // return signed interger
    myInt = intSign*myInt;
    return (int)myInt;
}
