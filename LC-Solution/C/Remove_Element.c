/*#My Leet Code id = im-yash21
#Runtime:0 ms , Memory Usage: 9.8 MB */
int removeElement(int* nums, int numsSize, int val) {
    int count = 0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}