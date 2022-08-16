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
    ListNode* mergeNodes(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        
        ListNode* newList= NULL;
        ListNode* Ptr= head->next;
        ListNode* Last= NULL;
        int sum= 0;
        while(Ptr != NULL)
        {
            if(Ptr->val == 0) 
            {
                ListNode* newNode= new ListNode(sum);
                if(newList == NULL) 
                {
                    newList= newNode;
                    Last= newNode;
                }
                else
                {
                    Last->next= newNode;
                    Last= newNode;
                }
                Ptr= Ptr->next; 
                sum= 0;
            }
            else
            {
                sum= sum+ Ptr->val;
                Ptr= Ptr->next;
            }
        }
        head= newList;
        return head;
    }
};