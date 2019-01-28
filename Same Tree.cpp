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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(( q && !p ) || ( p && !q )){
            return false;
        }
        if( !q && !p ){
            return true;
        }
        return (q->val == p->val) && isSameTree( p->left , q->left ) && isSameTree( p->right , q->right);

    }
};
