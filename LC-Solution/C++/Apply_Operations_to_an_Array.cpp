/*#My Leet Code id = im-yash21
#Runtime:3 ms , Memory Usage: 11.5 MB */
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int j = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
                i++;
            }
        }
        for(int i =  0 ;i<nums.size();i++){
            if(nums[i]!=0){
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            j++;
            }}
            return nums;
    }
};