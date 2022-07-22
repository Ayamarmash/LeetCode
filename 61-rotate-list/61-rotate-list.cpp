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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head == NULL || head->next == NULL) return head; 
        
        ListNode* Ptr1= new ListNode();
        ListNode* Ptr2= new ListNode();
        Ptr1 = head;
        Ptr2 = head;
        int length= 1;
        
        int temp= k;
        while(Ptr2->next && temp > 0){ 
            Ptr2= Ptr2->next ;
            length++;
            temp--;
            };
        k= k%length;
        if (k == 0) return head;
        while(Ptr2->next){
            Ptr1= Ptr1->next;
            Ptr2= Ptr2->next;
        }
        Ptr2->next= head;
        head= Ptr1->next;
        Ptr1->next= NULL;
        if(temp > 0)
        {
            head= rotateRight(head, temp);
        }
        
        Ptr1 = NULL;
        Ptr2 = NULL;
        delete Ptr1;
        delete Ptr2;
        return head;
    }
};