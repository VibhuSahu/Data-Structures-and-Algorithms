# 1672. Richest Customer Wealth (https://leetcode.com/problems/richest-customer-wealth/description/)

class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        return max([sum(nums) for nums in accounts])
       