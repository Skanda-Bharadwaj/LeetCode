//
//  solution.hpp
//  mergeSortedLinkedList
//
//  Created by Skanda Bharadwaj on 26/03/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef solution_hpp
#define solution_hpp

#include <stdio.h>

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
    void createAndAppendNode(ListNode*& newL, ListNode*& l, ListNode*& res);
};


#endif /* solution_hpp */
