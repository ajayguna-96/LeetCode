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
    ListNode* reverse(ListNode* head){
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(cur != NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    void print(ListNode* head){
        while(head !=  NULL){
            cout<<head->val<<endl;
            head = head->next;

        }
    }
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* cur = head;
        ListNode* ohead = head;
        ListNode* prev = head;
        ListNode* next = NULL;
        while(cur!=NULL && prev!= NULL && prev->next!= NULL){
            cur = prev->next;
            next = cur->next;
            cur->next = head;
            head = cur;
            prev->next = next;
            prev = next;

        }
        //cout<<prev->val;
        ListNode* ehead = head;
        ListNode* t1 = ehead;
        while(t1->next != ohead){
            t1 = t1->next;
        }
        ListNode* t2 = ohead;
        while(t2->next != NULL){
            t2 = t2->next;
        }
        t1->next = NULL;
        ehead = reverse(ehead);
        t2->next = ehead;
        head = ohead;
        return head;
    }
};
