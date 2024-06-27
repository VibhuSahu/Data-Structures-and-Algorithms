#  1295. Find Numbers with Even Number of Digits (https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)

class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0
        for num in nums:
            len = int(math.log10(num)) + 1
            if (len%2==0): count = count + 1
        
        return count

