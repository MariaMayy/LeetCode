// Time: O(N), где N - длина числа x
class Solution {
public:
    int reverse(int x) {
        long iNum = 0;
        
        while (x != 0) {
          iNum = iNum * 10 + (x % 10);
          x = x / 10;
        }
        
        if (iNum > INT_MAX || iNum < INT_MIN) return 0;
        else return iNum;
    }
};
