class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> Result;
        int vec_size = nums.size();
        
        for (int i = 0; i < vec_size; i++) {
            for (int j = i + 1; j < vec_size; j++) {
                if (nums[i] + nums[j] == target) {
                    Result.push_back(i);
                    Result.push_back(j);
            }
        }
    }
        return Result;
    };
};
