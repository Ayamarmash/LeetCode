var isPalindrome = function (head) {
    if (!head || !head.next) return true;

    // 1. Find the middle
    let slow = head, fast = head;
    while (fast && fast.next) {
        slow = slow.next;
        fast = fast.next.next;
    }

    // 2. Reverse the second half
    let prev = null, curr = slow;
    while (curr) {
        let next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;
    }

    // 3. Compare the two halves
    let left = head, right = prev;
    while (right) { 
        if (left.val !== right.val) return false;
        left = left.next;
        right = right.next;
    }

    return true;
};
