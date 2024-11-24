/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */

var topKFrequent = function (nums, k) {
    let map = {};
    for (let i = 0; i < nums.length; i++) {
        map[nums[i]] ??= 0;
        map[nums[i]]++;
    }
    let freq = [];
    let i = 0;
    for (let key in map) {
        key = key *1;
        let temp = [key, map[key]];
        freq[i] = temp;
        i++;
    }
    freq.sort((a, b) => { return b[1] - a[1] });
    let res = [];
    let j = 0;
    while (j < k && k <= freq.length) {
        res[j] = freq[j][0];
        j++;
    }
    return res;
};