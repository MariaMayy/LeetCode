// Time: O(n*log(m)), where log(m) - binary search, for - O(n)

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vRes;
        unordered_set<int> sRes; // insert O(1) or O(n) [set - insert O(log n)]

        sort(nums1.begin(), nums1.end()); // O(n*log(n))
        sort(nums2.begin(), nums2.end()); 

        for (int i = 0; i < nums1.size(); i++) {
            int iMid;
            int iLeft = 0;
            int iRight = nums2.size() - 1;

            while (iLeft <= iRight) {
                iMid = (iLeft + iRight) / 2;

                if (nums1[i] == nums2[iMid]) sRes.insert(nums1[i]);
                if (nums1[i] > nums2[iMid]) iLeft = iMid + 1;
                else iRight = iMid - 1;
            }
        }

        unordered_set<int>::iterator it1, it2;
        for (it1 = sRes.begin(), it2 = sRes.end(); it1 != it2; ++it1) {
            vRes.push_back(*it1);
        }
        
        return vRes;
    }
};
