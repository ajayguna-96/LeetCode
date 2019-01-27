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
    int sum( TreeNode* root, int pre){
        if(root == NULL){
            return 0;
        }
        pre = pre*10 + root->val;
        if( !root->left && !root->right ){
            return pre;
        }
        return (sum( root->left , pre ) + sum( root->right , pre));

    }
    int sumNumbers(TreeNode* root) {
        return sum( root , 0 );
    }
};
