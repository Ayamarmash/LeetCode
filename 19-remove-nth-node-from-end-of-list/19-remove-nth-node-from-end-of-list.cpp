/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (n == 0) return head;
        if (head == NULL) return NULL;
        
        ListNode* Ptr1 = head;
        ListNode* Ptr2 = head;
        int x= 1;
        
        while(Ptr1->next)
        {
            Ptr1= Ptr1->next;
            x++;
        }
        if(x == n) return head->next;
        x = x-n;
        for(int i=0; i<x-1; i++)
        {
            Ptr2= Ptr2->next;
        }
        Ptr2->next = Ptr2->next->next;
        return head;
    }
};