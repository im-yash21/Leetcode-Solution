/*#My Leet Code id = im-yash21
#Runtime:15 ms , Memory Usage: 12 MB */
int removeDuplicates(int* nums, int numsSize) {
    int k = -101 ,a = 0,i;
    for(i =0;i<numsSize;i++){
        if(nums[i]>k){
            k = nums[a] = nums[i];
            a++;
        }
    }
    return a;
}