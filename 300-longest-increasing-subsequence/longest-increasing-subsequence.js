/**
 * @param {number[]} nums
 * @return {number}
 */
/**
 * @param {number[]} nums
 * @return {number}
 */
var lengthOfLIS = function (nums) {
    if (nums.length <= 1) return nums.length;

    let dp = {};
    let max = 1;

    for (let i = 0; i < nums.length; i++) {
        let length = 1;

        for (let j = 0; j < i; j++) {
            dp[j] ??= 0;
            if (nums[j] < nums[i]) {
                length = Math.max(length, dp[j] + 1);
            }
        }

        dp[i] = length;
        max = Math.max(max, length);
    }

    return max;
};
