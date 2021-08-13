class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool bOK;
        
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{' ) {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    bOK = false;
                    return bOK;
                }
                if (s[i] == ')' && (st.top() == '[' ||  st.top() == '{')) {
                    bOK = false;
                    break;
                }
                if (s[i] == ']' && (st.top() == '(' ||  st.top() == '{')) {
                    bOK = false;
                    break;
                }
                if (s[i] == '}' && (st.top() == '[' ||  st.top() == '(')) {
                    bOK = false;
                    break;
                }
            st.pop();   
            } 
        }
        
        if (st.empty()) {
                bOK = true;
        } else {
            bOK = false;
        }
        
    return bOK;
    };
};
