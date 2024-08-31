/*#My Leet Code id = im-yash21
#Runtime:3 ms , Memory Usage: 8.1 MB */
int sumOfUnique(int* nums, int numsSize) {
     int sum = 0;
    for(int i =0;i<numsSize;i++){
      int   count = 0;
        for(int j=0;j<numsSize;j++){
            if(nums[i]==nums[j]){
               if(i!=j){
                count++;
               }
            }
        }
        if(count==0){
            printf("%d\n",i);
           sum += nums[i];
        }
    }
    return sum;
}