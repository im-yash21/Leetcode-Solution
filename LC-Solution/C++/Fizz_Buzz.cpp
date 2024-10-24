/*My Leet Code id = im-yash21
Runtime:0 ms , Memory Usage: 10.9 MB*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> a(n);
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5 == 0){
                a[i-1] = "FizzBuzz";
            }
            else if(i%3==0){
                 a[i-1] = "Fizz";
            }
            else if(i%5==0){
                 a[i-1] = "Buzz";
            }
            else{
                 a[i-1] = to_string(i);
            }
        }
        return a;
    }
