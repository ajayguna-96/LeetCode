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
    void sortedinsert(ListNode **head_ref,ListNode* node){
        ListNode* cur = *head_ref;
        if(*head_ref == NULL || node->val <= cur->val){
            node->next = *head_ref;
            *head_ref = node;
        }
        else{
            ListNode* prev = NULL;
            while(cur && cur->val < node->val){
                prev = cur;
                cur = cur->next;
            }
            ListNode* next = prev->next;
            prev->next = node;
            node->next = next;
        }
    }
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* sorted = NULL;
        ListNode* cur = head;
        ListNode* next = NULL;
        while(cur){
            next = cur->next;
            sortedinsert(&sorted,cur);
            cur = next;
        }
        return sorted;
    }
};
