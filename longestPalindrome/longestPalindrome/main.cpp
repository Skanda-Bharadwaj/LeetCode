//
//  main.cpp
//  longestPalindrome
//
//  Created by Skanda Bharadwaj on 18/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main(){
    
    Solution s;
    string myString = "abacab";
    
    string palindrome = s.longestPalindrome(myString);
    
    cout << palindrome << '\n';
    return 0;
}
