/**
 * @param {number[]} bills
 * @return {boolean}
 */
var lemonadeChange = function(bills) {
    let changeInHand = {5: 0, 10: 0}; 

    for (let i = 0; i < bills.length; i++) {
        if (bills[i] === 5) {
            changeInHand[5]++;
        } else if (bills[i] === 10) {
            if (changeInHand[5] > 0) {
                changeInHand[5]--;
                changeInHand[10]++;
            } else {
                return false;
            }
        } else if (bills[i] === 20) {
            if (changeInHand[10] > 0 && changeInHand[5] > 0) {
                changeInHand[10]--;
                changeInHand[5]--;
            } else if (changeInHand[5] >= 3) {
                changeInHand[5] -= 3;
            } else {
                return false;
            }
        }
    }
    return true;
};
