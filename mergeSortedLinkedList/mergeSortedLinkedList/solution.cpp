//
//  solution.cpp
//  mergeSortedLinkedList
//
//  Created by Skanda Bharadwaj on 26/03/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#include "solution.hpp"

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2){
    if(!l1) return l2;
    if(!l2) return l1;
    
    ListNode* l1t = l1;
    ListNode* l2t = l2;
    ListNode* newL = nullptr;
    ListNode* res = nullptr;
    
    while(l1t && l2t){
        if(l1t->val <= l2t->val){
            createAndAppendNode(newL, l1t, res);
            l1t = l1t->next;
        }
        else{
            createAndAppendNode(newL, l2t, res);
            l2t = l2t->next;
        }
    }
    
    if(!l1t) newL->next = l2t;
    if(!l2t) newL->next = l1t;
    
    return res;
}

void Solution::createAndAppendNode(ListNode*& newL, ListNode*& l, ListNode*& res){
    
    // Create a new node
    ListNode* newNode = new ListNode(l->val);
    
    // Assign head
    if(!res){
        res = newNode;
        newL = newNode;
    }
    
    // Append and point to the next node
    newL->next = newNode;
    newL = newNode;
}
