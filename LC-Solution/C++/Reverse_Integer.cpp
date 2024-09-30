/*#My Leet Code id = im-yash21
#Runtime:6 ms , Memory Usage: 8.2 MB */
class Solution {
public:
    int reverse(int x) {
        if(x>2147483647 || x < -2147483646){
            return 0;
        }
        bool c = false;
        if(x<0){
            x = -x;
            c = true;
        }
       long int rem,res = 0;
        while(x>0){
            rem = x%10;
            res = res*10 + rem;
            if(res>2147483647){
                return 0;
            }
            x = x/10;
        }
        if(c==true){
            res = -res;
        }
        return res;
    }
};