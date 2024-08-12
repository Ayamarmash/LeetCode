/**
 * @param {number} n
 * @return {number}
 */
var fib = function (n) {
    if (n <= 1) return n;

    let dp = [0, 1];

    for (let i = 2; i <= n; i++) {
        let tmp = dp[i - 1] + dp[i - 2];
        dp.push(tmp);
    }

    return dp[n];
}