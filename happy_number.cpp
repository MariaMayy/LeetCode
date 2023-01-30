// 1 - true
// 2 - 4 - 16 - 37 - 58 - 89 - 145 - 42 - 18 false
// 3 - 9 - 81 - 65 - 61 - false
// 4 - 16 - false
// 5 - 25 - 29 - 85 - 89 - false
// 6 - 36 - 45 - 41 - 17 - 50 - 25 - 29 - 85 - false
// 7 - 49 - 97 - 130 - 10 - 1 - true
// 8 - 64 - 62 - 29 - 85 - 89 - false
// 9 - 81 - 65 - 61 - false
// 10 - true
// Сумма квадратов должна дать 1 или когда старший разряд 1, остальные - 0
// От 1 до 9 счастливые только 1 и 7
// Передача по ссылке, т.к. изменяем объект каждый раз
// Time: O(n) 

class Solution {
public:
    void helper(int& n, int& iRes) {
      // base case - only one number
      if (n >= 0 && n <= 9) {
        iRes = n;
        return;
      }

      // recursion case
      int iSum = 0;
      while (n > 0) {
        int iCurDig = n % 10; // current digit
        iSum += iCurDig * iCurDig;
        n = n / 10;
      }

      helper(iSum, iRes);
    }

    bool isHappy(int n) {
        int iRes = 0;

        helper(n, iRes);
        if (iRes == 1 || iRes == 7) return true;
        return false;
    }
};
