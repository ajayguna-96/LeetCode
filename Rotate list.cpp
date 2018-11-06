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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* current = head;
        ListNode* prev = NULL;
        if(head==NULL || head->next==NULL){
            return head;
        }
        int len=1;
        while(current->next!=NULL){
            current = current->next;
            len++;
        }
        current->next = head;
        if(k%=len){
            for(int i=0; i<len-k;i++){
                current = current->next;
            }
        }
        prev = current->next;
        current->next = NULL;
        return prev;
    }
};
