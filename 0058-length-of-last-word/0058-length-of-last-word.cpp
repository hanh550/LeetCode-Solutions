class Solution {
public:
    int lengthOfLastWord(string s) {
        while (s[s.size() - 1] == ' ') {
            s.pop_back();
        }

        int last = s.rfind(' ');
        string cuoi = s.substr(last + 1);

        return cuoi.size();
    }
};