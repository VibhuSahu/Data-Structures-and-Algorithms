// 1672. Richest Customer Wealth (https://leetcode.com/problems/richest-customer-wealth/description/)

func maximumWealth(accounts [][]int) int {
    greater := 0
    for _, nums := range accounts {
        sumValue := 0
        for _, num := range nums {
            sumValue = sumValue + num
        }
        if greater < sumValue {
            greater = sumValue
        }
    }

    return greater
    
}