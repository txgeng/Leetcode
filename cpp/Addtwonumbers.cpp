// Source : https://oj.leetcode.com/problems/add-two-numbers/
// Author : Tongxing Geng
// Date   : 2017-09


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(0);
        ListNode *head = result;
        
        int carry = 0;
        while (l1||l2||carry){
            if(l1){
                carry = carry + l1->val;
                // foo->bar() is the same as (*foo).bar()
                l1 = l1->next;                
            }
            if(l2){
                carry = carry + l2->val;
                l2 = l2->next;
            }
            result->next = new ListNode(carry%10);
            carry = carry/10;
            result = result->next;
        }
        return head->next;
    }
};