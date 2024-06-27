// 1672. Richest Customer Wealth (https://leetcode.com/problems/richest-customer-wealth/description/)

class Solution {
    public int maximumWealth(int[][] accounts) {
        int richest = Integer.MIN_VALUE;
        for (int[] nums : accounts) {
            int sumValue = 0;
            for (int num : nums) {
                sumValue = sumValue + num;
            }
            if (sumValue > richest) { richest = sumValue; }
        }
        return richest;
        
    }
}