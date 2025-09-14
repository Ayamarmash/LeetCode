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

    let slow = head, fast = head;

    // slow will be at the middle when fast is in the end (fast moves x2)
    while (fast?.next) {
        slow = slow.next;
        fast = fast.next.next
    }
    console.log(slow.val)
    // reverse the second half of the linked list
    let ptr = slow;
    let current = slow.next
    if (!current) return slow.val === head.val;
    ptr.next = null;
    while (current) {
        let rest = current.next;
        current.next = ptr;
        ptr = current;
        console.log(current.val)
        if (!rest) break;
        current = rest;
    }

    let first = head;
    while (current && first) {
        console.log(current.val, ', ', first.val)
        if (current.val !== first.val) return false;
        current = current.next;
        first = first.next;
    }

    return true;
};