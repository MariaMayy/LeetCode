class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> setNums;
        for (int i = 0; i < nums.size(); i++) {
          setNums.insert(nums[i]);
        }
        
        if (setNums.size() != nums.size()) return true;
        else return false;
    }
};
