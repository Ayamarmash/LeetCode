/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    let res = [];
    let highestValue = candies[0];
    for(let i = 1; i < candies.length; i++){
        if(candies[i] > highestValue) highestValue = candies[i];
    }
    
    for(let i = 0; i < candies.length; i++){
        if(candies[i] + extraCandies >= highestValue) res.push(true);
        else res.push(false);
    }
    return res;
};