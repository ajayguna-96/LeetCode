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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;
        int c1 = 0, c2 = 0;
        while(a!=NULL)
        {
            c1++;
            a=a->next;
        }
        while(b!=NULL)
        {
            c2++;
            b=b->next;
        }
        if(c1 == 0 && c2 == 0) return NULL;
        int diff = 0;
        int i = 0;
        if(c1>c2){
            diff = c1-c2;

            while(headA != NULL && i<diff){
                headA=headA->next;
                i++;
            }
        }
        if(c1<c2){
            diff = c2-c1;
            while(headB != NULL && i<diff){
                headB=headB->next;
                i++;
            }
        }
        while(headB != NULL && headA != NULL)
        {
            if(headB == headA){
                return headA;
            }
            headB = headB->next;
            headA= headA->next;
        }
        return NULL;

    }
};
