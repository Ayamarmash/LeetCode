/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {

    if (n === 0 || n === 1) return 1;
    if (n === 2) return 2;

    let dp = [1, 1];
    for (let i = 2; i <= n; i++) {
        let temp = dp[i - 1] + dp[i - 2];
        dp.push(temp);
    }
    console.log(dp)
    return dp[n];
};