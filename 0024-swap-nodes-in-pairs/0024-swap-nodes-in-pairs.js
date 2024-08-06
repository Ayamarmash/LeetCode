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
var swapPairs = function (head) {
    if (!head) return null;
    if (!head.next) return head;

    let nextNode = head.next;
    let restOfLinkedList = head.next.next;

    nextNode.next = head;
    head.next = swapPairs(restOfLinkedList);

    return nextNode;
};