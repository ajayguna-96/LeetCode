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
    ListNode* getTail(ListNode* head){
        while(head->next!=NULL && head!=NULL){
            head = head->next;
        }
        return head;
    }
    ListNode* partition(ListNode* head, ListNode* end, ListNode** sub_head, ListNode** sub_end){
        ListNode* pivot = end;
        ListNode* tail = end;
        ListNode* prev = NULL;
        ListNode* cur = head;
        while(cur != pivot){
            if(cur->val < pivot->val){
                if(*sub_head == NULL){
                    *sub_head = cur;
                }
                prev = cur;
                cur = cur->next;
            }
            else{
                if(prev!=NULL){
                    prev->next = cur->next;
                }
                ListNode* temp = cur->next;
                tail->next = cur;
                cur->next = NULL;
                tail = cur;
                cur = temp;
            }
        }
        if(*sub_head == NULL){
            *sub_head = pivot;
        }
        *sub_end = tail;
        return pivot;
    }
    ListNode* quicksortRecur(ListNode* head, ListNode* end){
        if(head == NULL || head->next == NULL ){
            return head;
        }
        ListNode* sub_head = NULL;
        ListNode* sub_end = NULL;
        ListNode* pivot = partition(head, end, &sub_head, &sub_end);
        if(sub_head != pivot){
            ListNode* temp = sub_head;
            while(temp->next != pivot){
                temp = temp->next;
            }
            temp->next = NULL;
            sub_head = quicksortRecur(sub_head,temp);
            temp = getTail(sub_head);
            temp->next = pivot;
        }
        pivot->next = quicksortRecur(pivot->next,sub_end);
        return sub_head;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL ){
            return head;
        }
        ListNode* end = getTail(head);
        ListNode* result = quicksortRecur(head,end);
        return result;
    }
};
