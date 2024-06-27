// 1672. Richest Customer Wealth (https://leetcode.com/problems/richest-customer-wealth/description/)

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int greater = 0;
    for (int i = 0; i < accountsSize; i++) {
        int sumValue = 0;
        for (int j = 0; j < *accountsColSize; j++) {
            sumValue = sumValue + accounts[i][j];
        }
        if (greater < sumValue) { greater = sumValue; }
    }
    return greater;
    
}