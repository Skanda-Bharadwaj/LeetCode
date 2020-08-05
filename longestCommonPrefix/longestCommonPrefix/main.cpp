//
//  main.cpp
//  longestCommonPrefix
//
//  Created by Skanda Bharadwaj on 12/02/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "lcp.hpp"
#include "iostream"

int main(){
    Solution S;
    vector<string> strs;
    
    strs.push_back("flower");
    strs.push_back("floor");
    strs.push_back("flightt");
    
    string lcp = S.longestCommonPrefix(strs);
    
    cout << lcp << '\n';
    return 0;
}
