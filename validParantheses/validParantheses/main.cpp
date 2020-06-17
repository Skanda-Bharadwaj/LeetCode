//
//  main.cpp
//  validParantheses
//
//  Created by Skanda Bharadwaj on 23/03/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution s;
    bool validParantheses = s.isValid("{[]");
    
    if(validParantheses)
        std::cout << "Yes, parantheses are valid" << '\n';
    else
        std::cout << "No, parantheses are not valid" << '\n';
    return 0;
}
