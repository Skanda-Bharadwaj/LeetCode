//
//  solution.cpp
//  LetterCombinationsOfPhoneNumber
//
//  Created by Skanda Bharadwaj on 08/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

vector<string> Solution::letterCombinations(string digits){
    if(digits.length()==0) return {};
    
    // Start from the first digit
    return depthFirstSearch(digits, 0, "");
}

vector<string> Solution::depthFirstSearch(string digits, int pos, string current){
    // if end of string is reached, push the combination to output
    if(pos >= digits.length()){
        output.push_back(current);
        return output;
    }

    // traverse until end of string
    for(int i = 0; i < numberToLetters[digits[pos] - '0'][i]; i++)
        depthFirstSearch(digits, pos+1, current+numberToLetters[digits[pos] - '0'][i]);
    
    return output;
}
