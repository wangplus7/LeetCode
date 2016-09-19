//
//  solution.h
//  002.AddTwoNumbers
//
//  Created by wangjiaqi on 16/9/19.
//  Copyright © 2016年 wjq. All rights reserved.
//


//Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL){
            return l2;
        }
        if(l2 == NULL){
            return l1;
        }
        
        ListNode *result = l1;
        ListNode *preL1 = NULL;
        
        while (l1 != NULL && l2 != NULL) {
            l1->val = l1->val + l2->val;
            
            if(l1->val >= 10){
                l1->val = l1->val % 10;
                if(l1->next == NULL){
                    l1->next = new ListNode(1);
                }else{
                    l1->next->val = l1->next->val + 1;
                }
            }
            
            preL1 = l1;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if(l1 == NULL){
            preL1->next = l2;
        }else{
            while(l1 && l1->val >= 10){
                l1->val = l1->val % 10;
                if(l1->next == NULL){
                    l1->next = new ListNode(1);
                }else{
                    l1->next->val = l1->next->val + 1;
                }
                l1 = l1->next;
            }
        }
        return result;
    }
};