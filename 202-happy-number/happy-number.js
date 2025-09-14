/**
 * @param {number} n
 * @return {boolean}
 */

const getNext = (n) => {
    console.log('now at', n)
    let sum = 0;
    while (n > 0) {
        let digit = n % 10;
        sum += digit * digit;
        n = Math.floor(n / 10)
    }
    return sum
}
var isHappy = function (n) {
    if (n === 1) return true;

    let slow = n, fast = getNext(n);

    // as long as its not happy and not in a cycle 
    while (fast !== 1 && fast !== slow) {
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    }

    return fast === 1;
};