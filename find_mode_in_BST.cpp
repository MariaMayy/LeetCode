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
    vector<int> findMode(TreeNode* root) {
        iMaxCount = findModeCount(root, umMode);
        
        for (pair<int, int> pNum : umMode) {
            if (pNum.second == iMaxCount)
                vRes.push_back(pNum.first);
        }
        return vRes;
    }
    
    
    int findModeCount(TreeNode* root, unordered_map<int, int> &map) {
        if (root != NULL) {
          // no val in the map
          if (map.find(root->val) == map.end()) 
              map.insert(make_pair(root->val, 1));
          else 
              map[root->val]++;
        }
        else return 0;
        
        return max(map[root->val], max(findModeCount(root->left, umMode), findModeCount(root->right, umMode)));
    }
    
private:
    int iMaxCount;
    vector<int> vRes;
    unordered_map<int, int> umMode;
};
