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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* res = NULL;
        ListNode* ans = NULL;
        if(l1 == NULL && l2 ==NULL) return NULL;
        while(l1!=NULL && l2!=NULL){
            if(l1->val>l2->val){
                if(res==NULL){
                    res = l2;
                    ans = res;
                }
                else{
                    res->next = l2;
                    res = l2;
                }
                l2 = l2->next;
            }
            else{
                if(res==NULL){
                    res = l1;
                    ans = res;
                }
                else{
                    res->next = l1;
                    res = l1;
                }
                l1 = l1->next;

            }

        }
        if(l1 == NULL && l2 ==NULL){
            if(res==NULL)
                ans = NULL;
            else
                res->next = NULL;
        }
        else if(l1==NULL){
            if(res==NULL)
                ans = l2;
            else
                res->next = l2;
        }
        else{
            if(res==NULL)
                ans = l1;
            else
                res->next = l1;
        }
        return ans;
    }
};
