// Time O(n)
// Возможно лучше использовать не вектор, а 2 массива, т.к. поиск в массиве выполняется за O(1), а тут сложная структура - вектор пар 
class Solution {
public:
    string intToRoman(int num) {
        string sRes = "";
        
        vector<pair<int, string>> vSymb {
          {1000, "M"},
          {900, "CM"},
          {500, "D"},
          {400, "CD"},
          {100, "C"},
          {90, "XC"},
          {50, "L"},
          {40, "XL"},
          {10, "X"},
          {9, "IX"},
          {5, "V"},
          {4, "IV"},
          {1, "I"},
        };

        int idx = 0;
        while (num != 0) {
          if (num >= vSymb[idx].first) {
            sRes += vSymb[idx].second;
            num -= vSymb[idx].first;
          } 
          else {
            idx++;
          }
        }
        
        return sRes;
    }
};


// Second solution
/*
class Solution {
public:
    string intToRoman(int num) {
        int Nums[]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string Roman[]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string sRes;
        for(int i = 0; i < 13; i++){
            while(num >= Nums[i]){
                sRes.append(Roman[i]);
                num -= Nums[i];
            }
        }
        
        return sRes;
    }
};


*/
