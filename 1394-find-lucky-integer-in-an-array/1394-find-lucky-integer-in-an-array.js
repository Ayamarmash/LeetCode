/**
 * @param {number[]} arr
 * @return {number}
 */
var findLucky = function(arr) {
    let map = {};
    arr.forEach((x)=>{
        // if the map[x] is falsy, make it 0 by default
        map[x] = map[x] ?? 0
        map[x]++;
    });
    var largest = -1;
    for(key in map){
        if(key == map[key]){
            if(largest < map[key]) largest = key;
        }
    }
    return largest;
};