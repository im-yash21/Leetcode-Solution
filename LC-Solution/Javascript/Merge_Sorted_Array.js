/*#My Leet Code id = im-yash21
#Runtime:56 ms , Memory Usage: 50.1 MB */

var merge = function(nums1, m, nums2, n) {
    for(let i = m ,j = 0;i<m+n;i++,j++){
         nums1[i] = nums2[j] 
    }
    for(let i = 0;i<m+n;i++){
        for(let j = 0 ; j<m+n;j++){
            if(nums1[i]<nums1[j]){
                let temp = nums1[i]
                nums1[i] = nums1[j]
                nums1[j] = temp
            }
        }
    }
};