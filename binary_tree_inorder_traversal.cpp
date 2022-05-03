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
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        
        vector<int> vLeft;
        vector<int> vRight;
        vector<int> vResult;
        
        vLeft = inorderTraversal(root->left);
        vRight = inorderTraversal(root->right);
        
        for (int i = 0; i < vLeft.size(); i++) {
            vResult.push_back(vLeft[i]);
        }
        
        vResult.push_back(root->val);
        
        for (int i = 0; i < vRight.size(); i++) {
            vResult.push_back(vRight[i]);
        }
        
        return vResult;
    }
};
