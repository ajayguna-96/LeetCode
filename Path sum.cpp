class Solution {
public:
    bool HasSum(struct TreeNode *root, const int sum, int s){
        if (root == NULL){
            return 0;
        }

        s = root->val + s;

        if (sum == s && root->left == NULL && root->right == NULL){
            return 1;
        }

        return HasSum(root->left, sum, s) || HasSum(root->right, sum, s);
    }
    bool hasPathSum(struct TreeNode* root, int sum) {
        return HasSum(root, sum, 0);
    }
};
