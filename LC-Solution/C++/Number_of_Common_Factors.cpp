/*#My Leet Code id = im-yash21
#Runtime:2 ms , Memory Usage: 7.5 MB */
class Solution {
public:
    int commonFactors(int a, int b) {
        int i=1,count=0;
        while(a>=i && b>=i){
           if(a%i==0 && b%i==0) count++;
           i++;
        }
        return count;
    }
};