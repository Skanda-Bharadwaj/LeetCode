//
//  main.cpp
//  palindromeNumber
//
//  Created by Skanda Bharadwaj on 04/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include <iostream>
#include "solution.hpp"

int main(){
    Solution s;
    bool isPalindrome =  s.isPalindrome(1231);
    
    std::cout << isPalindrome << '\n';
    return 0;
}
