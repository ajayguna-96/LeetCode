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
    ListNode* deleteDuplicates(ListNode* head) {
        struct ListNode* cur = head;
        struct ListNode* pre = NULL;
        if(cur==NULL) return NULL;
        while(cur->next!=NULL){
            if(cur->val == cur->next->val){
                pre = cur->next->next;
                free(cur->next);
                cur->next = pre;
            }
            else{
                cur = cur->next;
            }

        }
        return head;
    }
};
