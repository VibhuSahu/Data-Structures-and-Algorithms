# 1672. Richest Customer Wealth (https://leetcode.com/problems/richest-customer-wealth/description/)

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        return max([sum(nums) for nums in accounts])
       