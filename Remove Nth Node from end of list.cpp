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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode* temp = head;
        struct ListNode* prev = head;
        struct ListNode* itr = head;
        while(n>0)
        {
            if(temp!=NULL)
                temp = temp->next;
            n--;
        }
        if(temp==NULL && n==0){
            head = head->next;
        }

        while(temp!=NULL){
            prev = itr;
            itr = itr->next;
            temp = temp->next;
        }
        if(itr->next!= NULL)
            prev->next = itr->next;
        else
            prev->next = NULL;
        return head;
    }
};
