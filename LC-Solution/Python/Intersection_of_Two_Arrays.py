#My Leet Code id = im-yash21
#Runtime:44 ms , Memory Usage: 16.8 MB

class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nums1 = set(nums1)
        nums2 = set(nums2) 
        return list(nums1.intersection(nums2))