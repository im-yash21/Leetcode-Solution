/*My Leet Code id = im-yash21
Runtime:2 ms , Memory Usage: 7.4 MB*/
class Solution {
public:
    int passThePillow(int n, int time) {
        bool x =true;
        int y=0;
        for(int i=0;i<=time;i++){
            if(x){
                y++;
                if(y==n) x = false; 
            }
            else{
                y--;
                if(y==1) x = true;
            }
        }
        return y;
    }
};
