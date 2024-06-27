// 1295. Find Numbers with Even Number of Digits (https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)

class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for (int num : nums) {
            int len = (int) (Math.log10(num) + 1);
            if (len%2==0) count++;
        }
        return count;
    }
}