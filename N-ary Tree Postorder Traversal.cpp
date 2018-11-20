/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> answer;
        if(root)
        traverse(answer,root);
        return answer;
    }
    void traverse(vector<int> &answer,Node* node)
    {
        if(!(node->children.empty()))
        for(auto i:node->children)
            traverse(answer,i);
        answer.push_back(node->val);
    }
};
