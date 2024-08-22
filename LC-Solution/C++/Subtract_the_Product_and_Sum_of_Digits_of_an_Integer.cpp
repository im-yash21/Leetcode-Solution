/*My Leet Code id = im-yash21
Runtime:0 ms , Memory Usage: 7.4 MB*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0,mul = 1;
        while(n>0){
            int rem = n%10;
            sum += rem;
            mul *= rem;
            n = n/10;
        }
        return (mul-sum);
    }
};