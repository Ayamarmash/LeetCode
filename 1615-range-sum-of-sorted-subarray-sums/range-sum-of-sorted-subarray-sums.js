/**
 * @param {number[]} nums
 * @param {number} n
 * @param {number} left
 * @param {number} right
 * @return {number}
 */
var rangeSum = function(nums, n, left, right) {
    const MOD = 1e9 + 7;

    left--;
    let subArraySums = [];
    let startWindow = 0;
    let endWindow = 0;
    let sum = 0;
    let res = 0;

    while(startWindow < nums.length-1){
        if(endWindow === nums.length){
            startWindow++;
            endWindow = startWindow;
            sum = 0;
        }
        sum += nums[endWindow];
        subArraySums.push(sum);
        endWindow++;
    }

    subArraySums.sort((num1, num2) => num1-num2);

    for(let i = left; i < right; i++){
        res = (res + subArraySums[i]) % MOD;
    }

    return res;
};