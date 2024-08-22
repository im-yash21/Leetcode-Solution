/*My Leet Code id = im-yash21
Runtime:5 ms , Memory Usage: 8.4 MB*/

class Solution {
public:
    int addDigits(int num) {
        int res = 0;
        k:
        while(num>0){
            int rem = num%10;
            res = res+rem;
            num = num/10;
        }
        if(res>=10){
            num = res;
            res = 0;
            goto k;
        }
        return res;
    }
};