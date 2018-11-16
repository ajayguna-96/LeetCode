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
    vector<string> res;
    void path(TreeNode* root , string s){
        if(root == NULL){
            return;
        }
        s = s + to_string(root->val) + "->";
        if(root->left == NULL && root->right == NULL){
            s = s.substr(0,s.length()-2);
            res.push_back(s);
            s = "";
        }
        path(root->left,s);
        path(root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == NULL){
            return res;
        }
        path(root,"");
        return res;

    }
};
