// Time: O(log(n))

class Solution {
public:
    bool isPerfectSquare(int num) {
        int iLeft = 1;
        int iRight = num / 2;
        long int iMid;

        if (num == 1) return true;
        
        while (iLeft <= iRight) {
            iMid = iLeft + (iRight - iLeft) / 2;
  
            if (iMid * iMid == num) return true; // if "int iMid" - undefined behavior (runtime error: signed integer overflow)
            if (iMid * iMid < num) iLeft = iMid + 1;
            else iRight = iMid - 1;
        }
        return false;
    }
};
