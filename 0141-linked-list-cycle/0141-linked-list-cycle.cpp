/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        if(head->next == NULL) return false;
        ListNode* Ptr1 = head;
        ListNode* Ptr2 = head->next;
        while(Ptr2 != NULL && Ptr2->next != NULL){
            if(Ptr1 == Ptr2) return true;
            else{
                Ptr1 = Ptr1->next;
                Ptr2 = Ptr2->next->next;
            }
        }
        return false;
    }
};