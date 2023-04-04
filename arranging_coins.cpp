/*
1 0 
2 1
3 2
4 3
5 4
..
n n-1

arif. progression a1 = 1
d = 1

Sum(1..a_i): check Sum(1..a_i) > n
a_i = a1 + d*(i - 1)
Sum(1..a_i) = (a1 + a_i) * i / 2 or (2*a1 + d*(i - 1))*i/2  */


class Solution {
public:
    int arrangeCoins(int n) {
        int iLeft = 0;
        int iRight = n;

        if (n == 1) return 1;

        while (iLeft <= iRight) {
            long iMid = iLeft + (iRight - iLeft) / 2;
            if (((2 + (iMid - 1))* iMid / 2) == n) return iMid;
            else if (((2 + (iMid - 1))* iMid / 2) > n) iRight = iMid - 1;
            else iLeft = iMid + 1;
        }

        return iLeft - 1;
    }
};
