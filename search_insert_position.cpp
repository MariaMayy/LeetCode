class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int iLow = 0;
        int iHigh = nums.size() - 1;
        int iMid;
        
        while (iLow <= iHigh) {
            iMid = (iLow + iHigh) / 2;
            if (nums[iMid] == target) return iMid;
            if (nums[iMid] < target) iLow = iMid + 1;
            if (nums[iMid] > target) iHigh = iMid - 1;
        }
        
        if (nums[iMid] > target) return iMid;
        else return iMid + 1;
      
    }
};
