/*#My Leet Code id = im-yash21
#Runtime:48 ms , Memory Usage: 49.6 MB */

var searchRange = function(nums, target) {
    let k =[]
    let l = 0
    for(let i=0;i<nums.length;i++){
        if(nums[i]==target){
            k[l] = i
            l++
        }
    }
    if(l==0) {
       return [-1,-1]
    }
    else {
        let y = []
        y[0] = k[0]
        y[1] = k[k.length-1]
        return y
    }
};