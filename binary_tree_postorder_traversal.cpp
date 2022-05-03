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
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == NULL) return {};
        vector<int> vRes;
        vector<int> vLeft = postorderTraversal(root->left);
        vector<int> vRight = postorderTraversal(root->right);
        
        for (int i = 0; i < vLeft.size(); i++) {
            vRes.push_back(vLeft[i]);
        }
        for (int i = 0; i < vRight.size(); i++) {
            vRes.push_back(vRight[i]);
        }
        vRes.push_back(root->val);
        
        return vRes;
    }
};
