//
//  solution.hpp
//  LetterCombinationsOfPhoneNumber
//
//  Created by Skanda Bharadwaj on 08/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef solution_hpp
#define solution_hpp

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution{
    map<int, string> numberToLetters;
    vector<string> output;
    
public:
    Solution(){
        numberToLetters[2] =  "abc";
        numberToLetters[3] =  "def";
        numberToLetters[4] =  "ghi";
        numberToLetters[5] =  "jkl";
        numberToLetters[6] =  "mno";
        numberToLetters[7] = "pqrs";
        numberToLetters[8] =  "tuv";
        numberToLetters[9] = "wxyz";
    };
    
    vector<string> letterCombinations(string digits);
    vector<string> depthFirstSearch(string digits, int pos, string current);
};

#endif /* solution_hpp */
