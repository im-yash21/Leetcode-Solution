/*#My Leet Code id = im-yash21
#Runtime:5 ms , Memory Usage: 8.6 MB */
class Solution {
public:
    int scoreOfString(string s) {
        unsigned int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]>s[i+1]){
           ans =  ans + (s[i]-s[i+1]);
            continue;}
            ans =  ans + (s[i+1]-s[i]);
        }
        return ans;
    }
};