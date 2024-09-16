/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {
    let res = 0;
    let arr_res = 0;

    for (let i = 0; i < nums.length + 1; i++) {
        res += i;
    }
    for (let i = 0; i < nums.length; i++) {
        arr_res += nums[i];
    }
    return res - arr_res;


};