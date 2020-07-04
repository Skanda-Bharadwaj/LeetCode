//
//  solution.hpp
//  atoi
//
//  Created by Skanda Bharadwaj on 03/07/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef solution_hpp
#define solution_hpp

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution{
private:
    
    int intSign;
    long myInt;
    
public:
    Solution()
        :intSign(1), myInt(0){
    }
    
    int myAtoi(string str);
};

#endif /* solution_hpp */
