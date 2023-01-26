// Time: O(N), N - длина строки
// IV - 4; IX - 9; XL - 40; XC - 90; CD - 400; CM - 900;
// Римские цифры пишутся от наибольшего к наименьшему слева направо => если меньшее 
// число появляется перед большим числом, то число меньше на величину, используемую в 
// качестве суффикса к нему
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> umNums{
          {'I', 1},
          {'V', 5},
          {'X', 10},
          {'L', 50},
          {'C', 100},
          {'D', 500},
          {'M', 1000},
        };

        int iRes = 0;

        for (int i = 0; i < s.size(); i++) {
          char curSymb = s[i];
          char nextSymb = s[i + 1];

          if (umNums[curSymb] < umNums[nextSymb]) iRes = iRes - umNums[curSymb];
          else iRes = iRes + umNums[curSymb];
        }

        return iRes;
    }
};
