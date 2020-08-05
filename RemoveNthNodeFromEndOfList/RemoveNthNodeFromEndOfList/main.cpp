//
//  main.cpp
//  RemoveNthNodeFromEndOfList
//
//  Created by Skanda Bharadwaj on 05/08/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

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
    ListNode* p1_third = new ListNode(3);
    p1_second->next = p1_third;
//    ListNode* p1_fourth = new ListNode(4);
//    p1_third->next = p1_fourth;
//    ListNode* p1_fifth = new ListNode(5);
//    p1_fourth->next = p1_fifth;
    
    printLinkedList(p1);
    
    ListNode* res = s.removeNthFromEnd(p1, 2);
    
    printLinkedList(res);
    
    return 0;
}
