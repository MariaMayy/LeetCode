class Solution {
public:
    int search(vector<int>& nums, int target) {
        int iLow = 0;
        int iHigh = nums.size() - 1;
        int iMid, iNum;
        
        while (iLow <= iHigh) {
            iMid = iLow + iHigh;
            iNum = nums[iMid];
            if (iNum == target) return iMid;
            if (iNum < target) iLow = iMid + 1;
            if (iNum > target) iHigh = iMid - 1;
        } 
        return -1;
    }
};
