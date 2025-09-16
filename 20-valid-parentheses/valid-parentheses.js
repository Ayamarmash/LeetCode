/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
    if (s.length % 2 !== 0) return false;
    let openning = [], ptr = 0;
    const map = {
        ')': '(',
        '}': '{',
        ']': '['
    }

    while (ptr < s.length) {
        if (!map[s[ptr]]) openning.push(s[ptr]);
        else if (map[s[ptr]] !== openning.pop()) return false;
        ptr++;
    }
    return map[s[ptr]] === openning.pop();
};