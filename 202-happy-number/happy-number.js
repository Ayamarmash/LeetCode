/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function (n) {

    if (n === 1) return true;
    if (n > 1 && n <= 4) return false;

    let sum = 0;
    while (n >= 1) {
        sum += (n % 10) * (n % 10);
        n = Math.floor(n / 10);
    }
    return isHappy(sum);
};