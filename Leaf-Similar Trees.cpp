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
    vector<vector <int>> TreePaths;
    vector<int> TreePath;
    void Inorder( TreeNode* root ){
        if(root == NULL){
            return;
        }
        Inorder(root->left);
        if(!root->left && !root->right){
            TreePath.push_back( root->val);
        }
        Inorder(root->right);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> TreePath1;
        vector<int> TreePath2;
        Inorder(root1);
        TreePaths.push_back(TreePath);
        TreePath.clear();
        Inorder(root2);
        TreePaths.push_back(TreePath);

        if(TreePaths[0].size() != TreePaths[1].size()){
            return false;
        }
        else{
            int i = 0;
            while( i < TreePaths[0].size()){
                if(TreePaths[0][i] != TreePaths[1][i]){
                    return false;
                }
                i++;
            }
            return true;
        }
    }
};
