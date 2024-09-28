/*#My Leet Code id = im-yash21
#Runtime:0 ms , Memory Usage: 7.9 MB */
class Solution {
public:
    int lengthOfLastWord(string s) {
        int a = s.size()-1;
        int c = 0;
        while(s[a]==' '){
          a--;
        }
        while( a>=0 && s[a]!=' ')
        {
            c++;
            a--;
        }
        return c;
    }
};