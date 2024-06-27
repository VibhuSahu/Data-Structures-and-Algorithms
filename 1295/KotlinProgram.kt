// 1295. Find Numbers with Even Number of Digits (https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)

class Solution {
    fun findNumbers(nums: IntArray): Int {
        var count = 0
        nums.forEach{ num ->
            var len = Math.log10(num.toDouble()).toInt() + 1
            if (len%2==0) {
                count = count + 1
            } 

        }
        return count

        
    }
}
