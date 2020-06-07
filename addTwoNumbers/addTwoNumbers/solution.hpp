//
//  solution.hpp
//  addTwoNumbers
//
//  Created by Skanda Bharadwaj on 04/06/20.
//  Copyright © 2020 Skanda Bharadwaj. All rights reserved.
//

#ifndef solution_hpp
#define solution_hpp

#include <stdio.h>

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};
#endif /* solution_hpp */
