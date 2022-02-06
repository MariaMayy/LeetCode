class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int iLeft = 0;
        int iRight = numbers.size() - 1;
        vector<int> ans;
        
        while (iLeft < iRight) {
            int iSum = numbers[iLeft] + numbers[iRight];
            
            if (iSum == target) {
                ans.push_back(iLeft + 1);
                ans.push_back(iRight + 1);
                break;
            }
            else if (iSum > target) iRight--;
            else iLeft++;
        };
        
        return ans;
    }
};
