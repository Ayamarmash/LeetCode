/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    let rowStrings = {};
    let res = '';
    
    let currentRow = 0;
    
    let prevRow = 0;

    for(let i = 0; i < s.length; i++){
        if(rowStrings[currentRow] === undefined){ 
            rowStrings[currentRow] = s[i];
        } else{
            rowStrings[currentRow] += s[i];
        }
        if(currentRow === numRows-1 || ((currentRow < prevRow) && currentRow !== 0)){
            prevRow = currentRow;
            currentRow--;
        }
        else{
            prevRow = currentRow;
            currentRow++;
        }
    }
    for(let str in rowStrings){
        res += rowStrings[str];
    }

    return res;
};