/*#My Leet Code id = im-yash21
#Runtime:0 ms , Memory Usage: 7.7 MB */

class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;s[i]!=NULL;i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};