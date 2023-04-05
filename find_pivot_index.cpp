/*
1 7 3 6 5 6
We look at the number (we know the index), we look at the sum to the left of the number (0 to i not inclusive) and 
to the right of the number (i+1 to the end). Let's create an array of prefix sums to immediately calculate the sum by [L;R).
0 1 2 3  4  5  6
0 1 2 3  4  5  6
1 7 3 6  5  6
0 1 8 11 17 22 28 - prefix sum
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix;
        prefix.push_back(0);
        //prefix.push_back(nums[0]);
        bool bOK = false;
        int idx;

        for (int i = 1; i <= nums.size(); i++) {
          prefix.push_back(prefix[i - 1] + nums[i - 1]);
          //cout << prefix[i] << " "; 
        }
       
        for (int i = 0; i < nums.size(); i++) {
          if (bOK) break;
          else {
            bOK = (prefix[i] - prefix[0]) == (prefix[nums.size()] - prefix[i + 1]) ? true : false;
            idx = i;
           // cout << "i = " << i << " " << (prefix[i] - prefix[0]) << " " << (prefix[nums.size()] - prefix[i + 1]);
          }
        }

        
        if (bOK) return idx;
        else return -1;
    }
};


