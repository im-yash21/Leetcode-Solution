/*#My Leet Code id = im-yash21
#Runtime:35 ms , Memory Usage: 49.1 MB */
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,c=0,p=0;
        while(i<nums.size()){
          if(nums[i]==1){
             c++;
        }
        else{
              c=0;
        } 
        if(p<c){
                p=c;
              }
        i++;
        }
        return p;
    }
};