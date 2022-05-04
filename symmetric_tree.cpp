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
    bool check(TreeNode* pLeft, TreeNode* pRight) {
        if (pLeft == NULL || pRight == NULL) return (pLeft == pRight);
        if (pLeft->val != pRight->val) return false;
        else return {
            check(pLeft->left, pRight->right) && check(pLeft->right, pRight->left) && 
                (pLeft->val == pRight->val)
        };
    }
    
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return check(root->left, root->right);
    }
};
