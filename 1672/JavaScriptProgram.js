// 1672. Richest Customer Wealth (https://leetcode.com/problems/richest-customer-wealth/description/)


/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    const _ = require("lodash");
    let greater = 0;
    accounts.forEach((row) => {
        let sumValue = _.sum(row);
        if(sumValue > greater) {
             greater = sumValue; 
        }
    });
    return greater;
};