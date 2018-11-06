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
        ListNode* pre = NULL;
        ListNode* next = NULL;
        while(cur != NULL){
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = NULL;
        ListNode* l = NULL;
        l1 = reverse(l1);
        l2 = reverse(l2);
        int carry = 0,sum = 0;
        while(l1 !=NULL && l2 !=NULL)
        {

            ListNode* ans = (ListNode*)malloc(sizeof(ListNode));
            sum = l1->val + l2->val + carry;
            carry = sum/10;
            ans->val = sum%10;
            if(res==NULL){
                res=ans;
            }
            else
            {
                l->next=ans;
            }
            l=ans;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            ListNode* ans = (ListNode*)malloc(sizeof(ListNode));
            sum = l1->val + carry;
            carry = sum/10;
            ans->val = sum%10;
            l->next=ans;
            l=ans;
            l1 = l1->next;
        }
        while(l2!=NULL){
            ListNode* ans = (ListNode*)malloc(sizeof(ListNode));
            sum = l2->val + carry;
            carry = sum/10;
            ans->val = sum%10;
            l->next=ans;
            l=ans;
            l2 = l2->next;
        }
        if(carry!=0)
        {
                ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
                temp->val=carry;
                temp->next=NULL;
                l->next=temp;
        }
        else
            l->next = NULL;
        return  reverse(res);


    }
};
