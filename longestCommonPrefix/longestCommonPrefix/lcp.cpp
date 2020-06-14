//
//  lcp.cpp
//  longestCommonPrefix
//
//  Created by Skanda Bharadwaj on 12/02/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "lcp.hpp"

string Solution::longestCommonPrefix(vector<string>& strs){
    string lcp = "";
    int letterCnt=0;
    
    if(strs.size()==0)
        return lcp;
    
    bool flag = true;
    while(flag){
        if(strs.size()>1){
            for(int i=0; i<strs.size()-1; i++){
                if(strs[i+1][letterCnt]!=strs[i][letterCnt]){
                    flag = false;
                }
            }
            if(flag){
                if (strs[0][letterCnt] == '\0')
                    return lcp;
                else{
                    lcp += strs[0][letterCnt];
                    letterCnt++;
                }
            }
        }
        else{
            return strs[0];
        }
    }
    return lcp;
}
