// 1295. Find Numbers with Even Number of Digits (https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)

class Solution {
    func findNumbers(_ nums: [Int]) -> Int {
        var count = 0
        nums.forEach { num in
            let len = Int(floor(log10(Double(num)))) + 1
            if len%2==0 {
                count = count + 1
            }
        }

        return count

        
    }
}