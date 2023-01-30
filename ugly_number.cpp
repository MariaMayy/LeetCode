// Time: O(n)

class Solution {
public:
    
    bool isUgly(int n) {
      if (n == 1) return true;
      if (n <= 0) return false;
      
      bool bCheck = true;

      while (n > 1 && bCheck) {
        if (n % 2 == 0) {
          bCheck = true;
          n = n / 2;
        } 
        else if (n % 3 == 0 ) {
                bCheck = true;
                n = n / 3;
              }
              else if (n % 5 == 0 ) {
                      bCheck = true;
                      n = n / 5;
                    }
                    else bCheck = false;
      }
        
      return bCheck;
    }
};
