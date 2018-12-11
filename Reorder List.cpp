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
    void printList(ListNode* head){
        while(head != NULL){
            cout<<head->val<<endl;
            head = head->next;
        }
    }
    ListNode* reverse( ListNode* head){
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode * prev = NULL;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        ListNode* endhead = NULL;
        if(!fast){
            endhead = prev->next;
            //printList(head);
            prev->next = NULL;
        }
        else{
            endhead = slow->next;
            //printList(head);
            slow->next = NULL;
        }
        ListNode* head2 = reverse(endhead);
        ListNode* head1 = head;
        ListNode* res = (ListNode*)malloc(sizeof(ListNode));
        head = res;
        //printList(head2);
        while(head1!=NULL || head2!=NULL){
            if(head1){
                res->next = head1;
                 res = res->next;
                head1 = head1->next;
            }
            if(head2){
                res->next = head2;
                res = res->next;
                head2 = head2->next;
            }

            cout<<res->val;
        }
        head = head->next;
    }
};
