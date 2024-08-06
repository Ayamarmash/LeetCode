/**
 * @param {string} word
 * @return {number}
 */
var minimumPushes = function (word) {
    if (word.length <= 8) return word.length;

    let map = {};
    for (let i = 0; i < word.length; i++) {
        map[word[i]] ??= 0;
        map[word[i]]++;
    }
    const sortedLetters = Object.keys(map).sort((a, b) => map[b] - map[a]);

    let totalPresses = 0;
    let currentPresses = 1;
    let lettersMappedToKeys = 0;

    for (let i = 0; i < sortedLetters.length; i++) {

        totalPresses += map[sortedLetters[i]] * currentPresses;
        lettersMappedToKeys++;
        // if 8 keys had letters mapped to them, then move to next index in each key
        if (lettersMappedToKeys === 8) {
            currentPresses++;
            lettersMappedToKeys = 0;
        }
    }
    return totalPresses;
};