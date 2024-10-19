/*My Leet Code id = im-yash21
Runtime:0 ms , Memory Usage: 8.2 MB*/
class Solution {
public:
    int numberOfChild(int n, int k) {
         bool x =true;
        int y=-1;
        for(int i=0;i<=k;i++){
            if(x){
                y++;
                if(y==n-1) x = false; 
            }
            else{
                y--;
                if(y==0) x = true;
            }
        }
        return y;
    }
};
