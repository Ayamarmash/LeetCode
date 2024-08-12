/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {

    if (n === 0 || n === 1) return 1;
    if (n === 2) return 2;

    let minOne = 1;
    let minTwo = 2;
    let latest = 0;

    for (let i = 2; i < n; i++) {
        latest = minOne + minTwo;
        minOne = minTwo;
        minTwo = latest;
    }
    
    return latest;
};