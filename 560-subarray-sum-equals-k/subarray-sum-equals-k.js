/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function (nums, k) {
    if (nums.length === 1) {
        return nums[0] === k ? 1 : 0;
    }
    let res = 0;
    for (let i = 0; i < nums.length; i++) {
        let currentSum = 0;
        for (let j = i; j < nums.length; j++) {
            currentSum += nums[j];
            if (currentSum === k) res++;
        }
    }
    return res;
};