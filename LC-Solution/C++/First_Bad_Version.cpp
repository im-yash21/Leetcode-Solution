/*#My Leet Code id = im-yash21
#Runtime:266 ms , Memory Usage: 7.6 MB */
class Solution {
public:
    int firstBadVersion(int n) {
        for(int i=1;i<=n;i++){
            if(isBadVersion(i)){
                return i;
            }
        }
        return 0;
    }
};