/**
 * @param {string[]} grid
 * @return {number}
 */
const directions = [
  [-1, 0], // up
  [0, 1], // right
  [1, 0], // down
  [0, -1], //left
];

// this solution is taken from number of islands solution
function dfs(matrix, row, col) {
  matrix[row][col] = 1;

  for (let direction of directions) {
    const nextRow = row + direction[0];
    const nextCol = col + direction[1];

    if (
      nextRow >= 0 &&
      nextRow <= matrix.length - 1 &&
      nextCol >= 0 &&
      nextCol <= matrix[0].length - 1 &&
      matrix[nextRow][nextCol] === 0
    ) {
      dfs(matrix, nextRow, nextCol);
    }
  }
}

var regionsBySlashes = function (grid) {
  // initialize length of grid and matrix
  const gridSize = grid.length;
  const matrixSize = gridSize * 3;
  const matrix = new Array(gridSize * 3)
    .fill(null)
    .map(() => new Array(gridSize * 3).fill(0));

  // populate matrix with slashes
  for (let i = 0; i < gridSize; i++) {
    for (let j = 0; j < gridSize; j++) {
      const row = i * 3;
      const col = j * 3;

      // backslash  slash
      if (grid[i][j] === "\\") {
        matrix[row][col] = 1;
        matrix[row + 1][col + 1] = 1;
        matrix[row + 2][col + 2] = 1;
      }

      // forward slash
      if (grid[i][j] === "/") {
        matrix[row][col + 2] = 1;
        matrix[row + 1][col + 1] = 1;
        matrix[row + 2][col] = 1;
      }
    }
  }

  // count regions
  let count = 0;
  // do sequential search
  for (let row = 0; row < matrixSize; row++) {
    for (let col = 0; col < matrixSize; col++) {
      // if we find 0 meaning we find new region and switch all the zero to 1 (like "number of islands")
      if (matrix[row][col] === 0) {
        dfs(matrix, row, col); // this solution is taken from number of islands solution
        count++;
      }
    }
  }

  return count;
};