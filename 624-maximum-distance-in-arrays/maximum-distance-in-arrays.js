/**
 * @param {number[][]} arrays
 * @return {number}
 */
var maxDistance = function (arrays) {

    let min = arrays[0][0];
    let max = arrays[0][arrays[0].length - 1];
    let res = 0;

    for (let i = 1; i < arrays.length; i++) {
        let currentMin = arrays[i][0];
        let currentMax = arrays[i][arrays[i].length - 1];

        res = Math.max(res, Math.max(currentMax - min, max - currentMin));
        min = Math.min(min, currentMin);
        max = Math.max(max, currentMax);
    }
    return res;
};