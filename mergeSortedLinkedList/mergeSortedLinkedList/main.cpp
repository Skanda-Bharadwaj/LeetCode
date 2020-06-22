//
//  main.cpp
//  mergeSortedLinkedList
//
//  Created by Skanda Bharadwaj on 26/03/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include <iostream>
#include "solution.hpp"

void printLinkedList(ListNode* l){
    while(l){
        std::cout << l->val ;
        l = l->next;
        if(l) std::cout << " -> ";
    }
    std::cout << '\n';
}

int main() {
    Solution s;
    
    ListNode* p1 = new ListNode(1);
    ListNode* p1_second = new ListNode(2);
    p1->next = p1_second;
    ListNode* p1_third = new ListNode(4);
    p1_second->next = p1_third;
    
    ListNode* p2 = new ListNode(1);
    ListNode* p2_second = new ListNode(3);
    p2->next = p2_second;
    ListNode* p2_third = new ListNode(5);
    p2_second->next = p2_third;
    
   
    ListNode* res = s.mergeTwoLists(p1, p2);
    
    printLinkedList(p1);
    printLinkedList(p2);
    printLinkedList(res);
    return 0;
}
