/**
 * @param {string[]} details
 * @return {number}
 */
var countSeniors = function(details) {
    let res = 0;
    for(let i = 0; i < details.length; i++){
        let age = details[i][11] + details[i][12];
        if(age > 60) res++;
    }

    return res;
};