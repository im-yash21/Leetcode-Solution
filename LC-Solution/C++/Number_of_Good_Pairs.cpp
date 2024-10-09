/*#My Leet Code id = im-yash21
#Runtime:4 ms , Memory Usage: 8.7 MB */
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};