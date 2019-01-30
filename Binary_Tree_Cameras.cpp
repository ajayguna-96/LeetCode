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
    int minCameraCover(TreeNode* root) {
        if( !root ){
            return 0;
        }
        if( !root->left && !root->right ){
            return 0;
        }
        int root_in = 1 + minCameraCover( root->left ) + minCameraCover( root->right );
        int root_ex = 0;
        if( root->left ){
            root_ex += 1 + minCameraCover( root->left->left ) + minCameraCover( root->left->right );
        }
        if( root->right ){
            root_ex += 1 + minCameraCover( root->right->left ) + minCameraCover( root->right->right );
        }
        return min(root_ex, root_in);

    }
};
