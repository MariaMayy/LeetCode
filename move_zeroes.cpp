class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> tmp;
        int iCount = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) tmp.push_back(nums[i]);
            else iCount++;
        }
        
        for (int j = 0; j < iCount; j++) {
            tmp.push_back(0);
        }
        
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = tmp[i];
        }
    }
};
