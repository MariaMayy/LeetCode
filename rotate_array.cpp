class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int iSize = nums.size();
        vector<int> tmp(iSize);
        
        for (int i = 0; i < iSize; i++) {
            tmp[(i+k)%iSize] = nums[i];
        }
        for (int i = 0; i < iSize; i++) {
            nums[i] = tmp[i];
        }
    }
};
