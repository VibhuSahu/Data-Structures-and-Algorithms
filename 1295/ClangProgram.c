//  1295. Find Numbers with Even Number of Digits (https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)


int findNumbers(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        if (!(((int) log10(nums[i])+1) % 2)) {
            count++;
        }
    }
    return count;
    
}