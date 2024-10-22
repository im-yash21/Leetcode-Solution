/*My Leet Code id = im-yash21
Runtime:0 ms , Memory Usage: 14.3 MB*/
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(string s: logs){
            if(s=="../") {
                if(count!=0){count--;}}
            else if(s=="./"){}
            else count++;
        }
        return count;
    }
};
