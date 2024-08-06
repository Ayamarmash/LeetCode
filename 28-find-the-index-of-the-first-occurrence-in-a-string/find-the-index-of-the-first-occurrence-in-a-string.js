/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (haystack, needle) {
    if (needle.length > haystack.length) return -1;
    if (needle.length === haystack) return 0;
    
    for(let i = 0 ; i < haystack.length; i++){
        let currentSubString = haystack.slice(i, i + needle.length);
        console.log(currentSubString)

        if(currentSubString === needle) return i;
    }
    return -1;
};