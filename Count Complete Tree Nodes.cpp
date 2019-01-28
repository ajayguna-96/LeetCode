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
    int countNodes(TreeNode* root) {
        if( !root ){
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int count = 0;
        while(q.size()>0){
            TreeNode* cur = q.front();
            count++;
            q.pop();
            if(cur->left){
                q.push(cur->left);
            }
            if(cur->right){
                q.push(cur->right);
            }
        }
        return count;
    }
};
