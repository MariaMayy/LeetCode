/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void AddFunc(TreeNode* root, vector<int>& v) {
        if (root == NULL) return;
        AddFunc(root->left, v);
        v.push_back(root->val);
        AddFunc(root->right, v);
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int> vRes;
        
        AddFunc(root, vRes);
        
        int pLeft = 0;
        int pRight = vRes.size() - 1;
        
        while (pLeft < pRight) {
            if (vRes[pLeft] + vRes[pRight] == k) return true;
            else if (vRes[pLeft] + vRes[pRight] > k) pRight--;
            else pLeft++;
        }
        
        return false;
    }
};
