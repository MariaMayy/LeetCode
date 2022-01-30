// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int iLow = 1;
        int iHigh = n;
        int iMid;
        
        while (iLow <= iHigh) {
            iMid = (iLow + iHigh) / 2;
            if (!isBadVersion(iMid)) iLow = iMid + 1;
            else iHigh = iMid - 1;
        }
        return iMid;
    }
};
