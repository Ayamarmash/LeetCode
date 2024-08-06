/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
    let resMap = {};
    let res = [];

    for (let i = 0; i < strs.length; i++) {
        let sortedAnagram = strs[i].split('').sort();
        resMap[sortedAnagram] ??= [];
        resMap[sortedAnagram].push(strs[i]);
    }

    for (let group in resMap) {
        res.push(resMap[group]);
    }
    return res;
};