/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function (head) {
    let stack = [];
    let ptr = head;
    while (ptr) {
        stack.push(ptr.val)
        ptr = ptr.next
    }
    ptr = head;
    while (ptr) {
        if (ptr.val !== stack[stack.length-1]) return false;
        ptr = ptr.next;
        stack.pop();
    }
    return true;
};