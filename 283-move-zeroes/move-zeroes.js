
var moveZeroes = function (nums) {
    if (nums.length <= 1) return;

    let start = 0;
    while (start < nums.length && nums[start] !== 0) start++;
    if (start === nums.length) return;

    let end = start + 1;

    while (end < nums.length) {
        if (nums[end] !== 0) {
            nums[start] = nums[end];
            nums[end] = 0;

            start++;
            while (start < nums.length && nums[start] !== 0) start++;
            end = Math.max(end + 1, start + 1);
        } else {
            end++;
        }
    }
};
