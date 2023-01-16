/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int iLeft = 1;
        int iRight = n;
        int iMid;

        while (iLeft <= iRight) {
            iMid = iLeft + (iRight - iLeft) / 2; // (iLeft + iRight) / 2 
            //runtime error: signed integer overflow: 1063376696 + 2126753390 cannot be represented in type 'int' 

            if (guess(iMid) == 0) return iMid;
            if (guess(iMid) == -1) iRight = iMid - 1;
            else iLeft = iMid + 1;
        }
        return iMid;
    }
};
