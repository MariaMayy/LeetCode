class Solution {
public:
    string reverseWords(string s) {
        int iLeft = 0;
        int iRight = s.length() - 1;
        int i = 0;
        
        while (i < s.length()) {
            iLeft = i;
            // find right border of word
            while (s[i] != ' ' && i < s.length()) {
                i++;
            }
            
            iRight = i - 1; // swap elements in word
            while (iLeft < iRight) {
                char tmp = s[iLeft];
                s[iLeft] = s[iRight];
                s[iRight] = tmp;
        
                iLeft++;
                iRight--;
            }
            // skip spaces
            while (s[i] == ' ' && i < s.length()) {
                i++; 
            }
            
        }
        return s;
    }
};
