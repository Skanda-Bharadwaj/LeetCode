//
//  solution.cpp
//  palindromeNumber
//
//  Created by Skanda Bharadwaj on 04/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

bool Solution::isPalindrome(int x){
    if(x < 0)
        return false;
    
    int nDigits = (int)log10(x)+1, frontDigit = 0, backDigit = 0, temp=x;
    int cnt = (int)(nDigits/2);
    
    for(int i=0; i<cnt ; i++){
        frontDigit = (int)(x/pow(10, nDigits-i-1))%10;
        backDigit = temp%10;
        
        if(frontDigit != backDigit){
            return false;
        }
        temp = (int)temp/10;
    }
    return true;
}
