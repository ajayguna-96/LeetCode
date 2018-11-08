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
    ListNode* reverse(ListNode* head,int k){
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        int i = 0;
        while(cur != NULL && i<k){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            i++;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int k = n-m;
        ListNode* cur = head;
        ListNode* chead = NULL;
        ListNode* ctail = NULL;
        ListNode* prev = head;
        int i = 1;
        if(head == NULL || head->next == NULL){
            return head;
        }
        if(m == n){
            return head;
        }
        while( cur != NULL && i<m){
            prev = cur;
            cur = cur->next;
            i++;
        }
        ctail = cur;
        while( cur!= NULL && i<=n){
            cur = cur->next;
            i++;
        }
        chead = reverse(ctail,k+1);
        if(m!=1){
            prev->next = chead;
        }
        else{
            head = chead;
        }
        if(ctail != cur)
            ctail->next = cur;
        return head;

    }
};
