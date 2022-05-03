/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> AddPostorder(Node* root, vector<int>& v) {
        if (root == NULL) return {};
        
        for (Node* tmp: root->children) {
            AddPostorder(tmp, v);
        }
        v.push_back(root->val);
        
        return v;
    }
    
    vector<int> postorder(Node* root) {
        vector<int> vResult;
        AddPostorder(root, vResult);
        return vResult;
    }
};

