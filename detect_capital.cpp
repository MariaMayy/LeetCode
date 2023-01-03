class Solution {
public:
    bool detectCapitalUse(string word) {
        int iCount = 0;

        if (word.length() == 1)
          return true;

        for (int i = 0; i < word.length(); i++) {
          if (isupper(word[i])) iCount++; // up (not 0)
        } 

        if (iCount == 0) return true;

        if (iCount == word.length())
          return true;
        
        if (iCount == 1 && isupper(word[0])) return true;
        else return false; 
    }
};
