// 1672. Richest Customer Wealth (https://leetcode.com/problems/richest-customer-wealth/description/)


class Solution {
    fun maximumWealth(accounts: Array<IntArray>): Int {
        var greater = 0
        for (nums in accounts) {
            var sumValue = 0
            for (num in nums) {
                sumValue = sumValue + num
            }
            if (sumValue > greater) greater = sumValue
        }
        return greater
        
    }
}