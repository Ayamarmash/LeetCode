/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function(candies, extraCandies) {
    let kidWithMaxNumber = candies[0];
    let res = [];
    for(let i=1; i < candies.length; i++){
        if(candies[i] > kidWithMaxNumber) kidWithMaxNumber = candies[i];
    }
    for(let i = 0; i<candies.length; i++){
        let current = candies[i] + extraCandies;
        if (current >= kidWithMaxNumber) res[i] = true;
        else res[i] = false;
    }
    return res;
};