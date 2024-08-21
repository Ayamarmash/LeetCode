/**
 * @param {string} coordinates
 * @return {boolean}
 */
var squareIsWhite = function (coordinates) {
    let [x, y] = coordinates.split('');
    let map = {
        'a': false, 'b': true, 'c': false, 'd': true, 'e': false, 'f': true, 'g': false, 'h': true
    };
    let isEvenCoordinate = y % 2 === 0;
    if (!map[x]) return map[x] || isEvenCoordinate;
    return map[x] && !isEvenCoordinate;
};