class Solution {
private:
    int binary_search_left(vector<int>& nums, int target) {
        int iLeft = 0;
        int iRight = nums.size() - 1;

        while (iLeft <= iRight) {
            int iMid = iLeft + (iRight - iLeft) / 2;
            if (nums[iMid] >= target) iRight = iMid - 1;
            else iLeft = iMid + 1;    
        }

        return iLeft;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int iLeft;
        int iRight;
        vector<int> result(2, -1);

        if (nums.size() == 0) return result; // empty array

        iLeft = binary_search_left(nums, target);
        iRight = binary_search_left(nums, target + 1) - 1; // we are looking for the index of the number 
        // following the given number, -1 is the last index of the desired number
        if (iLeft < nums.size() && nums[iLeft] == target) {
            result[0] = iLeft;
            result[1] = iRight;
        }
        
        return result;
    }
};
