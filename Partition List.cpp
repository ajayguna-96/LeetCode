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
    ListNode* partition(ListNode* head, int x) {
        ListNode* cur = head;
        ListNode* less = NULL;
        ListNode* gre = NULL;
        ListNode* head1 = NULL;
        ListNode* head2 = NULL;
        if(head == NULL || head->next == NULL){
            return head;
        }
        while(cur!=NULL){
            ListNode* adder = (ListNode*)malloc(sizeof(ListNode));
            adder->val = cur->val;
            adder->next = NULL;
            if(cur->val < x){
                if(less == NULL){
                    head1 = adder;
                    less = adder;
                }
                less->next = adder;
                less = adder;
            }
            else{
                if(gre == NULL){
                    gre = adder;
                    head2 = adder;
                }
                gre->next = adder;
                gre = adder;
            }
            cur = cur->next;
        }
        if(less != NULL){
            less->next = head2;
        }
        else{
            head1 = head2;
        }
        if(gre != NULL){
            gre->next = NULL;
        }
        return head1;


    }
};
