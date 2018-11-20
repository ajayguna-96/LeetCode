/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* res = NULL;
    void traverse(TreeNode* root, int val){
        if(root == NULL){
            return;
        }
        if(root->val == val){
            res = root;
            return;
        }
        traverse(root->left,val);
        traverse(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL){
            return root;
        }
        traverse(root,val);
        return res;
    }
};
