//
//  solution.cpp
//  longestSubstringWithoutRepetition
//
//  Created by Skanda Bharadwaj on 17/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int Solution::lengthOfLongestSubstring(string s){
    // Return if length of s is 0
    if(s.length() == 0) return 0;
    
    // Create a sliding window (substring)
    string subString = "";
    
    // add the first character of s to subString as default
    subString += s[0];
    
    // Set max length of subString to 1
    int maxLength = 1;
    
    // Loop through s
    for(string::iterator it1 = s.begin()+1; it1 != s.end(); it1++){
        // Loop through subString
        for(string::iterator it2 = subString.begin(); it2 != subString.end(); it2++){
            // Check if characters in s and subString match
            if(*it1 == *it2){
                // remove all the characters before the matched character
                // in substring including the character itself
                subString = subString.substr(subString.find(*it2)+1);
                
                // Come out of the loop
                break;
            }
        }
        // If second loop was not broken, add the character to subString
        subString += *it1;
        
        // Update maxLength
        if(subString.length() > maxLength)
            maxLength = (int)subString.length();
    }
    return maxLength;
}
