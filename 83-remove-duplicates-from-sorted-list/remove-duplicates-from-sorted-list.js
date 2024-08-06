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
var deleteDuplicates = function(head) {
    if(!head || !head.next) return head;

    let curr = head;

    while(curr && curr.next){
        if(curr.val === curr.next.val){
            let temp = curr.next;
            curr.next = temp.next;
            delete temp;
        }
        else curr = curr.next;
    }
    return head;
};