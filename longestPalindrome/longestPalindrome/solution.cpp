//
//  solution.cpp
//  longestPalindrome
//
//  Created by Skanda Bharadwaj on 18/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"
#include <math.h>
string Solution::longestPalindrome(string s){
    // Return if length is 0
    if(s.length() == 0) return "";
    
    // Initialize required variables
    int sLen = (int)s.length();
    int start = 0, maxLength = 1;
    
    // DP table
    bool palindrome[sLen][sLen];
    
    // Fill table corresponding to 1 letter palindrome
    for(int i = 0; i < sLen; i++)
        palindrome[i][i] = true;
        
    // Fill table corresponding to 2 letter palindrome
    for(int i = 0; i < sLen - 1; i++){
        int j = i+1;
        
        if(s[i] == s[j]){
            palindrome[i][j] = true;
            start = i; maxLength = 2;
        }
        else
            palindrome[i][j] = false;
    }
    
    // Fill table corresponding to 3 letter palindrome
    for(int j = 2; j < sLen; j++){
        for(int i = 0; i < j-1; i++){
            if(s[i] == s[j] && palindrome[i+1][j-1]){
                palindrome[i][j] = true;
                
                // If a longer palindrome is detected, update start and length
                // of the palindrome
                if(j-i+1 > maxLength){
                    start = i;
                    maxLength = j-i+1;
                }
            }
            else
                palindrome[i][j] = false;
        }
    }
    
    return s.substr(start, maxLength);
}


