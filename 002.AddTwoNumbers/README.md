# 1.题目
题目链接：https://leetcode.com/problems/add-two-numbers/

 Given an array of integers, return indices of theYou are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

>**Input:** (2 -> 4 -> 3) + (5 -> 6 -> 4)

>**Output:** 7 -> 0 -> 8

# 2.解析
此题比较简单，注意进位即可，当循环结束时注意检查是否仍然存在进位。

```
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
```
