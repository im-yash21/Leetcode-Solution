/*#My Leet Code id = im-yash21
#Runtime:15 ms , Memory Usage: 12 MB */
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num>0){
            if(num%2==0){num /= 2;}
            else{num -= 1;}
            count++;
        }
        return count;
    }
};