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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root == NULL){
            return res;
        }
        queue<TreeNode* > levelorder;
        levelorder.push(root);
        levelorder.push(NULL);
        TreeNode* prev;
        while(levelorder.size()>=1){
            TreeNode* cur = levelorder.front();
            levelorder.pop();
            if( cur == NULL ){
                res.push_back(prev->val);
                if(levelorder.size() == 0 ){
                    return res;
                }
                levelorder.push(NULL);
            }
            else{
                if(cur->left){
                    levelorder.push(cur->left);
                }
                if(cur->right){
                    levelorder.push(cur->right);
                }
                prev = cur;
            }

        }
        return res;

    }
};
