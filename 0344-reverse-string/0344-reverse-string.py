class Solution:
    def reverseString(self, s: list[str]) -> None:
         s[:] = s[::-1]
         return s
        
