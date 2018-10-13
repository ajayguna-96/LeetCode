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
    ListNode* removeElements(ListNode* head, int val) {
         if(head == NULL) {
            return NULL;
        }

        ListNode *temp = head;
        ListNode *prev;
        while(head->val == val) {
            temp = head;
            temp = temp->next;
            head = temp;
            if(!head || !head->next && head->val == val) {
                return NULL;
            }
        }

        while(temp->next != NULL) {
            prev = temp;
            temp = temp->next;

            if(temp->val == val) {

                temp = prev;

                if(temp->next!=NULL) {
                    temp->next = temp->next->next;

                }
            }
        }
        return head;
    }
};
