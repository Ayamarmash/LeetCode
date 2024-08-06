/**
 * @param {number[]} target
 * @param {number[]} arr
 * @return {boolean}
 */
var canBeEqual = function(target, arr) {
    let freqInTarget = {};

    for(let i=0; i < target.length; i++){
        freqInTarget[target[i]] ??= 0;
        freqInTarget[target[i]]++;
    }
    
    for(let i=0; i < arr.length; i++){
        if(!freqInTarget[arr[i]]) return false;
        else if(--freqInTarget[arr[i]] === 0){
                delete freqInTarget[arr[i]];
            }
        }
    return true;
};