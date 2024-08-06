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
var reverseList = function(head) {
    if(!head || !head.next) return head;

    let current = head;
    let prev = null;
    let next = null;

    while(current.next){
        next = current.next;
        current.next = prev;
        prev = current;
        current = next;
    }
    current.next= prev;
    return current;
};