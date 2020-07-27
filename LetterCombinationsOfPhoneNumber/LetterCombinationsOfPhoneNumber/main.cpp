//
//  main.cpp
//  LetterCombinationsOfPhoneNumber
//
//  Created by Skanda Bharadwaj on 08/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main(){
    
    Solution s;
    vector<string> output = s.letterCombinations("2739");
    
    for(auto &i:output)
        cout << i << '\n';
    return 0;
}
