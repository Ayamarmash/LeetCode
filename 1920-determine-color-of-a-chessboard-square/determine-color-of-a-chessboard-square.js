/**
 * @param {string} coordinates
 * @return {boolean}
 */
var squareIsWhite = function (coordinates) {
    let [x, y] = coordinates.split('');
    let map = {
        'a': false, 'b': true, 'c': false, 'd': true, 'e': false, 'f': true, 'g': false, 'h': true
    };
    // b --> true
    // b2 ---> 2%2 === 0 ---------> true 
    // true || true ---> true
    if (!map[x]) return map[x] || y % 2 === 0;
    return map[x] && y % 2 !== 0;
};