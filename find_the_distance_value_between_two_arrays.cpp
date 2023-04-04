//  |a1 - a2| <= d:
// a1 - a2 <= d -> a2 >= a1 - d
// a1 - a2 >= -d -> a2 <= a1 + d

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int iSizeFirst = arr1.size();
        int iSizeSecond = arr2.size();
        int iCount = 0;

        sort(arr2.begin(), arr2.end());

        for (int i = 0; i < iSizeFirst; i++) {
            int iLeft = 0;
            int iRight = iSizeSecond;
            int LessBord = arr1[i] - d;
            int MoreBord = arr1[i] + d;
            
            while (iLeft <= iRight) {
                int iMid = iLeft + (iRight - iLeft) / 2;
                if (arr2[iMid] < LessBord) iLeft = iMid + 1;
                else if (arr2[iMid] > MoreBord) iRight = iMid - 1;
                else {
                    iCount++;
                    break;
                }
            }
        }
        return iSizeFirst - iCount;
    }
};
