/*#My Leet Code id = im-yash21
#Runtime:16 ms , Memory Usage: 12.6 MB */
class Solution {
public:
    string removeDuplicates(string s) {
        string stk;
        for (char c : s) {
            if (stk.empty() || stk.back() != c) {
                stk += c;
            } else {
                stk.pop_back(); 
            }
        }
        return stk;
    }
};