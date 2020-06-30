//
//  main.cpp
//  ZigZagConversion
//
//  Created by Skanda Bharadwaj on 29/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int main() {
    Solution s;
    
    string myString = "PAYPALISHIRING";
    
    string outString = s.convert(myString, 3);
    
    cout << outString << '\n';
    return 0;
}
