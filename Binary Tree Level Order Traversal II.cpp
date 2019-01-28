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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if( !root ){
            return res;
        }
        queue<TreeNode* > levelorder;
        levelorder.push(root);
        levelorder.push(NULL);
        vector<int> level;
        while(levelorder.size() > 0 ){
            TreeNode* cur = levelorder.front();
            levelorder.pop();
            if( cur == NULL ){
                res.insert(res.begin(),level);
                level.clear();
                if(levelorder.size() != 0 ){
                    levelorder.push(NULL);
                }
            }
            else{
                if(cur->left){
                    levelorder.push(cur->left);
                }
                if(cur->right){
                    levelorder.push(cur->right);
                }
                level.push_back(cur->val);
            }
        }
        return res;
    }
};
