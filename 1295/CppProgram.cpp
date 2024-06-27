//  1295. Find Numbers with Even Number of Digits (https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num : nums) {
            int len = 0;
            while(num) {
                num = num / 10;
                len++;
            }
            if (!(len%2)) count++;
        }
        return count;
    }
};