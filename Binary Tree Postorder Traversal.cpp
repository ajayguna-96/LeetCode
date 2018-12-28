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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> stk;
        stk.push(root);
        while (!stk.empty()) {
            root = stk.top(); stk.pop();
            if (!root) continue;
            stk.push(root->left);
            stk.push(root->right);
            ans.push_back(root->val);

        }
        return vector<int>(rbegin(ans), rend(ans));
    }

};
