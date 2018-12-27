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
    TreeNode* newTree = NULL;
    TreeNode* head = NULL;
    TreeNode* newNode (int val){
        TreeNode* newTree = (TreeNode *)malloc(sizeof(TreeNode));
        newTree->val = val;
        newTree->left = NULL;
        newTree->right = NULL;
        return newTree;
    }
    void Inorder( TreeNode* root ){
        if(root == NULL){
            return;
        }
        Inorder(root->left);
        if(newTree == NULL){
            newTree = root;
            head = root;
        }
        else{
            newTree->right = newNode(root->val);
            newTree = newTree->right;
        }
        Inorder(root->right);

    }
    TreeNode* increasingBST(TreeNode* root) {
        Inorder(root);
        return head;
    }
};
