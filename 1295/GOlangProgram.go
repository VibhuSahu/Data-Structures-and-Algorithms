//  1295. Find Numbers with Even Number of Digits (https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/)
// 
func findNumbers(nums []int) int {
    count := 0
    for _, num := range nums {
        len := 0
        for num>0 {
            num = num/10
            len++
        }
        if len%2==0 {
            count = count + 1
        }
    }
    return count
    
}