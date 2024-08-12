function canJump(nums) {
    const n = nums.length;
    const dp = new Array(n).fill(false);
    dp[0] = true;

    for (let i = 0; i < n; i++) {
        if (dp[i]) {
            for (let j = i + 1; j <= i + nums[i] && j < n; j++) {
                dp[j] = true;
            }
        }
    }

    return dp[n - 1];
}
