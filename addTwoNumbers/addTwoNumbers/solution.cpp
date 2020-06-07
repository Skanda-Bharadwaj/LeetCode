//
//  solution.cpp
//  addTwoNumbers
//
//  Created by Skanda Bharadwaj on 04/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* res = nullptr;
    ListNode** node = &res;
    int sum{0}, carry{0}, remainder{0};
    
    while(l1!=NULL||l2!=NULL)
    {
        if(l1!=NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        
        if(l2!=NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        remainder = sum%10;
        (*node) = new ListNode(remainder);
        sum/=10;
        carry = sum;
        node = &((*node)->next);
    }
    
    if (carry==1)
    {
        (*node) = new ListNode(carry);
        node = &((*node)->next);
    }
    return res;
}
