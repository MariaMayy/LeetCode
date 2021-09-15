class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> vec;
        int iNum = 1;
        for (int i = 0; i < target.size(); i++) {
            while (target[i] != iNum) {
                vec.push_back("Push");
                vec.push_back("Pop");
                iNum++;
            }
            vec.push_back("Push");
            iNum++;
        }
        return vec;
    }
};
