/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    let map = {};
    for (let i = 0; i < nums.length; i++) {
        map[nums[i]] = i;
    }
    for (let i = 0; i < nums.length; i++) {
        let secondNumber = target - nums[i];
        if (map[secondNumber] > 0 && map[secondNumber] != i) return [i, map[secondNumber]]
    }
    return [];
};