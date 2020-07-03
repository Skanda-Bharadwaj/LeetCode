//
//  solution.cpp
//  implement_strStr
//
//  Created by Skanda Bharadwaj on 27/05/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

int Solution::strStr(string haystack, string needle){
    if(needle.length() == 0) return 0;
    
    int cnt=0;
    for(int i=0; i < haystack.length(); i++){
        if(haystack[i] == needle[cnt]){
            cnt++;
            if(cnt == needle.length())
                return i+1-cnt;
        }
        else{
            i -= cnt;
            cnt = 0;
        }
    }
    return -1;
}
