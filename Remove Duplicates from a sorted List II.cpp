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
        ListNode* cur = head;
        ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
        if(head == NULL) return NULL;
        temp->next = head;
        ListNode *prev = temp;
        while(cur!=NULL){
            while(cur->next!=NULL && prev->next->val == cur->next->val){
                cur =cur->next;
            }
            if(prev->next == cur){
                prev = prev->next;
            }
            else{
                prev->next = cur->next;
            }
            cur = cur->next;
        }
        return temp->next;
    }
};
