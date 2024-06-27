// 1672. Richest Customer Wealth (https://leetcode.com/problems/richest-customer-wealth/description/)


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int greater = INT_MIN;
        for (vector<int> nums : accounts) {
            int sum_of_elems = 0;
            for (int num : nums) { sum_of_elems += num; }
            if (sum_of_elems > greater) { greater = sum_of_elems; }
        }
        return greater;
        
    }
};