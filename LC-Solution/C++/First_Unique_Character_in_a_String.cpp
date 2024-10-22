/*My Leet Code id = im-yash21
Runtime:35 ms , Memory Usage: 13 MB*/
class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.size();i++){
            bool c = true;
            for(int j=0;j<s.size();j++){
              if((s[i]==s[j])&&(i!=j)){
                c = false;
                break;} 
            }
            if(c==true) return i;
        }
        return -1;
    }
};
