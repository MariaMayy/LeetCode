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
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        
        vector<int> vResult;
        vector<int> vLeft;
        vector<int> vRight;
        
        vResult.push_back(root->val);
        vLeft = preorderTraversal(root->left);
        vRight = preorderTraversal(root->right);
        
        for (int i = 0; i < vLeft.size(); i++) {
            vResult.push_back(vLeft[i]);
        };
        for (int i = 0; i < vRight.size(); i++) {
            vResult.push_back(vRight[i]);
        };
        return vResult;
    }
};
