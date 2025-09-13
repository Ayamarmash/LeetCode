/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var detectCycle = function (head) {
    let slow = head, fast = head;

    if(!head || !head.next) return null;

    while (fast?.next) {
        slow = slow.next;
        fast = fast.next.next;
        if (fast === slow) break;
    }

    // cycle detected
    if (fast === slow) {
        let ptr = head;
        while (ptr !== slow) {
            ptr = ptr.next;
            slow = slow.next;
        }
        return ptr;
    }

    return null;
};