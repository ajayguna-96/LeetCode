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

    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL && t2 == NULL) {
            return NULL;
        }
        TreeNode *root = (TreeNode* )malloc(sizeof(struct TreeNode));
        root->val = (t1 ? t1->val : 0) + (t2 ? t2->val : 0);
        root->left = mergeTrees(t1 ? t1->left : NULL, t2 ? t2->left : NULL);
        root->right = mergeTrees(t1 ? t1->right : NULL, t2 ? t2->right : NULL);
        return root;
    }
};
