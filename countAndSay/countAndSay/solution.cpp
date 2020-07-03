//
//  solution.cpp
//  countAndSay
//
//  Created by Skanda Bharadwaj on 30/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

string Solution::countAndSay(int n){
    string nStr = "1";
    if(n == 1) return nStr;
    else{
        for(int i = 2; i<=n; i++){
            nStr = cns(nStr);
        }
        return nStr;
    }
}


string Solution::cns(string s){
    int i=0; string nStr;
    
    for(string::iterator it = s.begin(); it != s.end(); it++){
        if(*(it+1) != *it){
            nStr += to_string(i+1);
            nStr += *it;
            i=0;
        }
        else
            i++;
    }
    return nStr;
}
