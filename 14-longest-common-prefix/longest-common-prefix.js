/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
    let prefix = '';
    let ptr = 0;

    while (ptr < strs[0].length) {
        for (let i = 1; i < strs.length; i++) {
            if (strs[i][ptr] !== strs[0][ptr] || !strs[i][ptr]) return prefix;
        }
        prefix += strs[0][ptr];
        ptr++;
    }

    return prefix;
};