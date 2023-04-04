class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int iLeft = 0;
        int iRight = letters.size() - 1;
        int iMid;

        if (letters[iRight] <= target) return letters[0];
        
        while (iLeft <= iRight) {
            iMid = iLeft + (iRight - iLeft) / 2;
            if (letters[iMid] > target) iRight = iMid - 1;
            else iLeft = iMid + 1;
        }

        return letters[iRight + 1];
    }
};
