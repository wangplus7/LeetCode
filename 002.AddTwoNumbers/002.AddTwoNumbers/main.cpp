//
//  main.cpp
//  002.AddTwoNumbers
//
//  Created by wangjiaqi on 16/9/19.
//  Copyright © 2016年 wjq. All rights reserved.
//

#include <iostream>
#include "solution.h"

int main(int argc, const char * argv[]) {
    Solution s;
    ListNode l1(2);
    ListNode l2(4);
    ListNode l3(3);
    
    l1.next = &l2;
    l2.next = &l3;
    
    ListNode n1(5);
    ListNode n2(6);
    ListNode n3(4);
    
    n1.next = &n2;
    n2.next = &n3;
    
    ListNode *r = s.addTwoNumbers(&l1, &n1);
    
    std::cout<<'[';
    while (r->next != NULL) {
       std::cout<< r->val<<',';
        r = r->next;
    }
    std::cout<<r->val<<"]\n";
    
    return 0;
}
