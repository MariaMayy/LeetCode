// two dictionaries: s->t, t->s; Go along two lines and match the characters, 
// if not added, then add, if already there, 
// check the correspondence in the two dictionaries, if something is wrong - false

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> st;
        map<char, char> ts;

        for (int i = 0; i < s.length(); i++) {
          if (st.find(s[i]) == st.end() && ts.find(t[i]) == ts.end()) {
            st[s[i]] = t[i];
            ts[t[i]] = s[i];
          } 
          else if (st[s[i]] != t[i] && ts[t[i]] != s[i]) {
            return false;
          }
        }
        return true;
    }
};
