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
    bool isPalindrome(ListNode* head) {
        if(head != NULL && head->next != NULL){
            ListNode *slow = head;
            ListNode *fast = head;
            ListNode* prev_middle = NULL;
            while(fast!=NULL && fast->next!=NULL ){
                prev_middle = slow;
                slow = slow->next;
                fast = fast->next->next;
            }
            //cout<<slow->val<<fast->val<<endl;
            if (fast != NULL)
            {
                slow = slow->next;
            }
            ListNode* second_half = slow;
            //cout<<second_half->val;
            prev_middle->next = NULL;
            ListNode* prev = second_half;
            ListNode* current = second_half;
            ListNode* next = NULL;
            while(current!=NULL){
                next = current->next;
                current->next = prev ;
                prev = current;
                current = next;
            }
            second_half = prev;
            while(head!=NULL && second_half!=NULL){
                //cout<<head->val<<" "<<second_half->val;
                if(head->val != second_half->val){
                    return false;
                }
                head=head->next;
                second_half = second_half->next;
            }
        }
        return true;

    }
};
