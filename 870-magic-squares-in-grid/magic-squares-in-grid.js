/**
 * @param {number[][]} grid
 * @return {number}
 */
var numMagicSquaresInside = function(grid) {
    const rows = grid.length;
    const cols = grid[0].length;
    let res = 0;

    for (let i = 0; i <= rows - 3; i++) {
        for (let j = 0; j <= cols - 3; j++) {
            if (isMagicSquare(grid, i, j)) {
                res++;
            }
        }
    }

    return res;
};

/**
 * @param {number[][]} grid
 * @param {number} row
 * @param {number} col
 * @return {boolean}
 */
function isMagicSquare(grid, row, col) {
    let usedNumbers = 0;
    const rowSums = [0, 0, 0];
    const colSums = [0, 0, 0];
    let diag1 = 0, diag2 = 0;

    for (let i = 0; i < 3; i++) {
        for (let j = 0; j < 3; j++) {
            const num = grid[row + i][col + j];
            
            if (num < 1 || num > 9) return false;
            
            const bit = 1 << num;
            if ((usedNumbers & bit) !== 0) return false;
            usedNumbers |= bit;

            rowSums[i] += num;
            colSums[j] += num;
            if (i === j) diag1 += num;
            if (i + j === 2) diag2 += num;
        }
    }

    const sum = rowSums[0];
    if (diag1 !== sum || diag2 !== sum) return false;
    for (let i = 0; i < 3; i++) {
        if (rowSums[i] !== sum || colSums[i] !== sum) return false;
    }

    return true;
}