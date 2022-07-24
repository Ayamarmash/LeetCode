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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right || head == NULL || head->next == NULL) return head;
        if(head->next->next == NULL)
        {   
            if(left > 3 && right > 3) return NULL;
            ListNode* temp= new ListNode();
            temp= head->next;
            temp->next= head;
            head->next=NULL;
            return temp;
        }
        ListNode* Ptr= head;
        ListNode* Start= head;// Start of the sub-list
        ListNode* End= head;//End of the sub-list
        ListNode* Right= head;// Right part to connect with
        ListNode* Left= head;// Left part to connect with
        
        int countLeft= 1;
        int countRight= 1;
        
        while(countLeft < left-1 && Left->next)
        {
            Left= Left->next;
            countLeft++;
        }
        if(left > 1) Start= Left->next;
        
        End= Start;
        while(countRight < right-left+1 && End->next)
        {
            End=End->next;
            countRight++;
        }
        Right= End->next;
        
        Ptr= Start;
        ListNode* Next= NULL;
        ListNode* Prev= NULL;
        while(Ptr != End)
        {
            Next= Ptr->next;
            Ptr->next= Prev;
            Prev= Ptr;
            Ptr= Next;            
        }

        Ptr->next= Prev;
        Left->next= Ptr;
        Start->next= Right;
        if(left==1) return Ptr;
        return head;
    }
};