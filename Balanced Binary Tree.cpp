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
    int height(TreeNode* node)
    {
       if(!node){
           return 0;
       }
       return 1 + max(height(node->left), height(node->right));
    }
    bool isBalanced(TreeNode* root){
        if(!root){
            return true;
        }
        int left = height(root->left);
        int right = height(root->right);
        if(abs(left-right) <= 1 && isBalanced(root->left) && isBalanced(root->right)){
            return true;
        }
        else{
            return false;
        }
    }
};
