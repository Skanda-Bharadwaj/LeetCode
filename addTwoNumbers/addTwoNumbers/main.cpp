//
//  main.cpp
//  addTwoNumbers
//
//  Created by Skanda Bharadwaj on 04/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include <iostream>
#include "solution.hpp"

int main() {
    
    Solution s;
    
    ListNode* l1 = new ListNode(2);
    ListNode* l2 = new ListNode(5);
    
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);
    
    ListNode *out = s.addTwoNumbers(l1, l2);
    
    while(out){
        std::cout << out->val << " -> ";
        out = out->next;
    }
    std::cout << "NULL\n";
    return 0;
}
