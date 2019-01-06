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
    int maxDepth(Node* root) {
        if(!root) return 0;
        queue<Node*> tree;
        tree.push(root);
        tree.push(NULL);
        int count = 0;
        while(!tree.empty()){
            Node* temp = tree.front();
            tree.pop();
            if( temp == NULL){
                count++;
                if(!tree.empty())
                    tree.push(NULL);
            }
            else{
                int i = 0;
                while( i < temp->children.size() ){
                    tree.push(temp->children[i]);
                    i++;
                }
            }
        }
    return count;
    }
};
