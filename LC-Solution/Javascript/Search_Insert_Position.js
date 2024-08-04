/*#My Leet Code id = im-yash21
#Runtime:53 ms , Memory Usage: 49.2 MB */

var searchInsert = function(nums, target) {
    for(i=0;i<nums.length;i++){
        if(nums[i]==target){
            return i
        }
        if(nums[i]>target){
             return i
        }
    }
    return i
};