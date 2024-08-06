/**
 * @param {number[]} nums
 * @return {number}
 */
function minSwaps(nums) {
    const s = nums.length;
    let ones = 0;
    for (let n of nums) {
        ones += n;
    }
    if (ones === 0 || ones === s) {
        return 0;
    }
    let curr = 0;
    for (let i = 0; i < ones; i++) {
        curr += nums[i];
    }
    let maxi = curr;
    for (let i = 0; i < s; i++) {
        curr -= nums[i];
        curr += nums[(i + ones) % s];
        if(maxi === ones) return 0;
        maxi = Math.max(maxi, curr);
    }
    return ones - maxi;
}