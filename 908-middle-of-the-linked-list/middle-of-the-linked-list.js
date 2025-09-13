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
var middleNode = function (head) {
    if (!head || !head.next) return head;

    let ptr1 = head;
    let ptr2 = head;

    while (ptr2?.next) {
        ptr1 = ptr1.next;
        ptr2 = ptr2.next.next;
    }

    return ptr1;
};