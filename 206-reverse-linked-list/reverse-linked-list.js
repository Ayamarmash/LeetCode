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
var reverseList = function (head) {
    if (!head || !head.next) return head;

    let prev = head, current = head.next;
    prev.next = null;
    while (current) {
        let next = current.next;
        current.next = prev;
        prev = current;
        current = next;
    }

    return prev;
};