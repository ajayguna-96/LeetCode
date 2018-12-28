vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> stk;
        stk.push(root);
        while (!stk.empty()) {
            root = stk.top(); stk.pop();
            if (!root) continue;
            ans.push_back(root->val);
            stk.push(root->left);
            stk.push(root->right);
        }
        return vector<int>(rbegin(ans), rend(ans));
    }
