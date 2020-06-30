//
//  solution.cpp
//  ZigZagConversion
//
//  Created by Skanda Bharadwaj on 29/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

string Solution::convert(string s, int numRows){
    
    // Get the length of the string
    int sLen = (int)s.length();
    
    // Return s if length of s is 0 or 1 OR if numRows is 1
    if(sLen <= 1 || numRows == 1) return s;
    
    // Define a sliding window of length 2*rows-2;
    // e.g. if nowRows = 3 w = [1, 2, 3, 2]; if nowRows = 4 w = [1, 2, 3, 4, 3, 2];
    int windowLength = 2*numRows-2;
    
    // Create rows of strings
    string result[numRows];
    
    
    // Initilize required variables
    string subString = ""; int len = 0;
    
    // Run through s in steps of window length
    for(int j = 0; j < sLen; j += windowLength){
        // Make sure to choose lat characters while striding in steps of window length
        len  = (sLen - j < windowLength) ? (sLen - j) : windowLength;
        
        // Extract the substring
        subString = s.substr(j, len);
        
        // Assign the character to corresponding row based on the window
        for(int k = 1; k <= len; k++){
            if(k <= numRows)
                result[k-1] += subString[k-1];
            else
                result[2*numRows-k-1] += subString[k-1];
        }
    }
    
    // Combine all the rows
    string outString = "";
    for(int i = 0; i < numRows; i++){
        outString += result[i];
    }
    
    return outString;
}
