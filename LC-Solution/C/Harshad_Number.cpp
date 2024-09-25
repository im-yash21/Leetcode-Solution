/*#My Leet Code id = im-yash21
#Runtime:0 ms , Memory Usage: 7.4 MB */
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int res=0,p=x;
        while(x>0){
         res = res + x%10;
         if(res>p){
            return -1;
         }
         x /= 10;
        }
        if(p%res==0){
        return res;
        }
        return -1;
    }
};