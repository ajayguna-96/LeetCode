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
    void merge(ListNode** head_ref, ListNode* node){
        if(*head_ref == NULL){
            *head_ref = node;
            return;
        }
        if( node == NULL){
            return;
        }
        else{
            while(node!=NULL){
                ListNode* cur = *head_ref;
                if(node->val <= cur->val){
                    ListNode* temp = node->next;
                    node->next = *head_ref;
                    *head_ref = node;
                    node = temp;
                }
                else{
                    ListNode* prev = NULL;
                    while(cur && cur->val < node->val){
                        prev = cur;
                        cur = cur->next;
                    }
                    ListNode* next = prev->next;
                    ListNode* temp = node->next;
                    prev->next = node;
                    node->next = next;
                    node = temp;
                }
            }
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* sorted = NULL;
        if(lists.size()<1){
            return NULL;
        }
        int i = 0;
        while(i<lists.size()){
            merge(&sorted,lists[i]);
            i++;
        }
        return sorted;

    }
};
