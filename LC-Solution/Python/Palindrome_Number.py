#My Leet Code id = im-yash21
#Runtime:53 ms , Memory Usage: 16.5 MB

class Solution:
    def isPalindrome(self, x: int) -> bool:
        self.x = x
        x = str(x)
        return x==x[::-1]  