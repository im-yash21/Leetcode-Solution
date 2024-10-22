/*My Leet Code id = im-yash21
Runtime:3 ms , Memory Usage: 7.5 MB*/
class Solution {
public:
   int totalMoney(int n) {
    int mon = 0, rest = 0, cal = 0;    

    for(int i = 1; i <= n; i++) {
        if(i % 7 == 1) { 
            mon++;      
            rest = mon; 
        }
        cal += rest;   
        rest++;        
    }
    return cal;
}

};
