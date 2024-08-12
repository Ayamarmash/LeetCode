
var KthLargest = function (k, nums) {
    this.k = k;
    this.nums = nums.sort((a, b) => a - b);
};


KthLargest.prototype.add = function (val) {

    let left = 0, right = this.nums.length - 1;

    // o(log n)
    while (left <= right) {
        let mid = Math.floor((right + left) / 2)
        if (this.nums[mid] < val) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // o(n) because of array shifting
    this.nums.splice(left, 0, val);

    if (this.k === 1) return this.nums[this.nums.length - 1];
    if (this.k === this.nums.length) return this.nums[0];
    return this.nums[this.nums.length - this.k];
};

/** 
 * Your KthLargest object will be instantiated and called as such:
 * var obj = new KthLargest(k, nums)
 * var param_1 = obj.add(val)
 */