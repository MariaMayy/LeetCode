// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int iLow = 1;
        long int iHigh = n;
        long int iMid;
        
        if (n == 1) return 1;
        while (iLow <= iHigh) {
            iMid = (iLow + iHigh) / 2;
            if (!isBadVersion(iMid)) iLow = iMid + 1;
            else iHigh = iMid - 1;
        }
        if (isBadVersion(iLow)) return iLow;
        else return iHigh;
    }
};
