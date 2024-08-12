/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
    if (nums.length === 1) return true;

    let maxReachableIndex = 0;
    for (let i = 0; i < nums.length; i++) {

        // if we are now beyond the max reachable index ( we can't reach it )
        if (i > maxReachableIndex) return false;

        if (maxReachableIndex >= nums.length-1) return true;

        // if we moved nums[i] steps from the current index i, where we will reach ?
        if (i + nums[i] > maxReachableIndex) maxReachableIndex = i + nums[i];
    }
    return true;
};
