/*My Leet Code id = im-yash21
Runtime:9 ms , Memory Usage: 23.4 MB*/
class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count = 0;
        for(int i=0;i<hours.size();i++){
            for(int j=i+1;j<hours.size();j++){
                if((hours[i]+hours[j])%24 ==0) count++;
            }
        }
        return count;
    }
};
