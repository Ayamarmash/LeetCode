/**
 * @param {number} length
 * @param {number} width
 * @param {number} height
 * @param {number} mass
 * @return {string}
 */
var categorizeBox = function (length, width, height, mass) {
    let isBulky = false, isHeavy = false;
    let volume = length * width * height;

    if (volume >= Math.pow(10, 9) ||
        length >= Math.pow(10, 4) ||
        width >= Math.pow(10, 4) ||
        height >= Math.pow(10, 4)) isBulky = true;

    if (mass >= 100) isHeavy = true;

    if (isBulky && isHeavy) return 'Both';
    if (!isBulky && !isHeavy) return 'Neither';
    if (isBulky) return 'Bulky';
    return 'Heavy';
};