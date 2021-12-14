class Solution {
public:
    bool isPalindrome(int x) {
        int iNum = x;
        long long iReverse = 0;
        
        if (x < 0) return false;
        while (x >= 10) {
            iReverse = iReverse*10 + x % 10; 
            x = x / 10;
        }
        iReverse = iReverse*10 + x % 10; 
        
        return iNum == iReverse;
    }
};
