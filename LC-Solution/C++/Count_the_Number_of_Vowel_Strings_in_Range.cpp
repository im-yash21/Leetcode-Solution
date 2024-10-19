/*My Leet Code id = im-yash21
Runtime:16 ms , Memory Usage: 36.7 MB*/
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0, i=0;
        for(string s: words){
            if(i>=left && i<=right){
            if((s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')&&(s[s.size()-1]=='a'||s[s.size()-1]=='e'||s[s.size()-1]=='i'||s[s.size()-1]=='o'||s[s.size()-1]=='u')) count++;
        }
        i++;
        }
        return count;
    }
