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
    bool hasnode(ListNode* head,int k){
        int i;
        for(i = 0;head != NULL && (i<k); i++){
            head = head->next;
        }
        if(i == k){
            return 1;
        }
        return 0;
    }
    ListNode* getkth(ListNode* head,int k){
        if(head == NULL){
            return head;
        }
        ListNode* kth = head;
        int i = 0;
        for(i=0; (i<k) && kth!=NULL;i++){
            kth = kth->next;
        }
        if(i==k && kth!=NULL){
            return kth;
        }
        return NULL;
    }
    ListNode* reverse(ListNode* head,int k){
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        int i = 0;
        while(i<k){
                next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
                i++;
            }
        return prev;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur = head;
        ListNode* temp = NULL;
        ListNode* newhead = NULL;
        ListNode* ctail = NULL;
        ListNode* chead = NULL;
        ListNode* ptail = NULL;

        if(head == NULL || head->next == NULL){
            return head;
        }
        if(k == 0 || k == 1){
            return head;
        }
        if(!hasnode(cur,k)){
            return head;
        }

        int i = 0;
        while(hasnode(cur,k) && cur!=NULL){
            ctail = cur;
            temp = getkth(cur,k);
            chead = reverse(cur,k);
            if(i != 0){
                ptail->next = chead;
            } else {
                newhead = chead;
            }
            ptail = ctail;
            cur = temp;
            i++;
        }
        if(cur!=NULL){
            ctail->next = cur;
        }
        return newhead;
    }
};
