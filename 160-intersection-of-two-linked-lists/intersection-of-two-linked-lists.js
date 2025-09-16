/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function (headA, headB) {
    if (headA === headB) return headB;

    let a = headA, b = headB;
    let map = new Set();
    while (a) {
        map.add(a)
        a = a.next;
    }
    while (b) {
        if (map.has(b)) return b;
        b = b.next;
    }
    return null;
};