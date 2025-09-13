/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteMiddle = function (head) {
    if (!head || !head.next) return null;
    if (!head.next.next) {
        head.next = null;
        return head;
    }

    let beforeMid = head;
    let slow = head;
    let fast = head;

    while (fast?.next) {
        if(slow !== head) beforeMid = beforeMid.next;
        slow = slow.next;
        fast = fast.next.next;
    }
    beforeMid.next = slow.next;
    slow.next = null;
    return head;
};