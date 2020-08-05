//
//  solution.cpp
//  RemoveNthNodeFromEndOfList
//
//  Created by Skanda Bharadwaj on 05/08/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

ListNode* Solution::removeNthFromEnd(ListNode* head, int n){
    if(!head->next && n == 1) return nullptr;
    
    int temp1Cnt = 0, temp2Cnt = 0;
    ListNode* temp1 = head, *temp2 = head;
    
    while(temp1->next){
        temp1 = temp1->next;
        temp1Cnt++;
        
        if(temp1Cnt - temp2Cnt > n){
            temp2 = temp2->next;
            temp2Cnt++;
        }
        
        if(!temp1->next && temp1Cnt - temp2Cnt < n) return head->next;
    }
    temp2->next = temp2->next->next;
    return head;
}
