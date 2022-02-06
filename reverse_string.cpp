class Solution {
public:
    void reverseString(vector<char>& s) {
        int iLeft = 0;
        int iRight = s.size() - 1;
        char tmp;
        
        for (int i = 0; i < s.size()/2; i++) {
            tmp = s[iLeft];
            s[iLeft] = s[iRight];
            s[iRight] = tmp;
            
            iLeft++;
            iRight--;
        }
    }
};
