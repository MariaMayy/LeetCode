class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        int iLeft = 0;
        int iRight = nums.size() - 1;
        
        while (iLeft <= iRight) {
            if (abs(nums[iLeft]) >= abs(nums[iRight])) {
                result.insert(result.begin(), nums[iLeft]*nums[iLeft]);
                iLeft++;
            }
            else {
                result.insert(result.begin(), nums[iRight]*nums[iRight]);
                iRight--;
            }
        }
        return result;
    }
};
