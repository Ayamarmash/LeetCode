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
    let length = 0;
    if (!head || !head.next) return head;
    let ptr = head;
    while (ptr) {
        length++;
        ptr = ptr.next;
    }
    ptr = head;
    let mid = Math.floor(length / 2);

    console.log(mid)
    while (mid > 0){
        ptr = ptr.next;
        mid--;
    }

    return ptr;
};