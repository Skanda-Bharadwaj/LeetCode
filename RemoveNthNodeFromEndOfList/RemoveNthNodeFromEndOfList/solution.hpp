//
//  solution.hpp
//  RemoveNthNodeFromEndOfList
//
//  Created by Skanda Bharadwaj on 05/08/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef solution_hpp
#define solution_hpp

#include <iostream>

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n);
};
#endif /* solution_hpp */
