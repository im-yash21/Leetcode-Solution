/*My Leet Code id = im-yash21
Runtime:0 ms , Memory Usage: 7.7 MB*/

class Solution {
public:
    bool detectCapitalUse(string word) {
        int i,a=0,b=0,c=0;
        for(i=0;word[i]!=NULL;i++){
            if(word[i]>='a' && word[i]<='z' ){
                a++;
            }
            if(word[i]>='A' && word[i]<='Z' ){
                b++;
            }
        }
        if(word[0]>='A' && word[0]<='Z'){
            c++;
        }
        if(a==i){
            return true;
        }
        else if(b==i){
            return true;
        }
        else if(i==a+c){
            return true;
        }
        else{
            return false;
        }
    }
};