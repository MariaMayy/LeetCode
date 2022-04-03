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
    TreeNode* TBuild(vector<int>& nums, int iLeft, int iRight) {
        int iMid = (iRight + iLeft) / 2;
        if (iLeft > iRight) return NULL;
        
        TreeNode* root = new TreeNode(nums[iMid]);
        
        root->left = TBuild(nums, iLeft, iMid - 1);
        root->right = TBuild(nums, iMid + 1, iRight);
        
        return root;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int iEnd = nums.size() - 1;
        int iStart = 0;
        
        return TBuild(nums, iStart, iEnd);
    }
};
