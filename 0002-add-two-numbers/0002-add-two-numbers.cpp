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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* Ptr1 = l1;
        ListNode* Ptr2 = l2;
        ListNode* Result = NULL;
        ListNode* Latest = Result;
        int reminder = 0;
        while(Ptr1 != NULL && Ptr2 != NULL)
        {
            ListNode* tmp = new ListNode;
            if(Ptr1->val + Ptr2->val + reminder < 10) 
            {
                tmp->val = Ptr1->val + Ptr2->val + reminder;
                reminder = 0;
                if(Result == NULL) 
                {
                    Result = tmp; 
                    Latest = Result;
                }
                else
                {
                    Latest->next = tmp;
                    Latest = tmp;
                }
            }
            else
            {
                tmp->val = (Ptr1->val + Ptr2->val + reminder)%10;
                reminder = (Ptr1->val + Ptr2->val + reminder)/10;
                if(Result == NULL) 
                {
                    Result = tmp; 
                    Latest = Result;
                }
                else
                {
                    Latest->next = tmp;
                    Latest = tmp;
                }
            }
            Ptr1 = Ptr1->next;
            Ptr2 = Ptr2->next;
        }
        while(Ptr1 != NULL) // to check if there is other numbers in l1
        {
            ListNode* tmp = new ListNode;
            if(Ptr1->val + reminder < 10) 
            {
                tmp->val = Ptr1->val + reminder;
                reminder = 0;
                if(Result == NULL) 
                {
                    Result = tmp; 
                    Latest = Result;
                }
                else
                {
                    Latest->next = tmp;
                    Latest = tmp;
                }
            }
            else
            {
                tmp->val = (Ptr1->val + reminder)%10;
                reminder = (Ptr1->val + reminder)/10;
                if(Result == NULL) 
                {
                    Result = tmp; 
                    Latest = Result;
                }
                else
                {
                    Latest->next = tmp;
                    Latest = tmp;
                }
            }
            Ptr1 = Ptr1->next;
        }
        while(Ptr2 != NULL) // to check if there is other numbers in l2
        {
            ListNode* tmp = new ListNode;
            if(Ptr2->val + reminder < 10) 
            {
                tmp->val = Ptr2->val + reminder;
                reminder = 0;
                if(Result == NULL) 
                {
                    Result = tmp; 
                    Latest = Result;
                }
                else
                {
                    Latest->next = tmp;
                    Latest = tmp;
                }
            }
            else
            {
                tmp->val = (Ptr2->val + reminder)%10;
                reminder = (Ptr2->val + reminder)/10;
                if(Result == NULL) 
                {
                    Result = tmp; 
                    Latest = Result;
                }
                else
                {
                    Latest->next = tmp;
                    Latest = tmp;
                }
            }
            Ptr2 = Ptr2->next;
        }
        if(reminder != 0)
        {
            ListNode* rem = new ListNode;
            rem->val = reminder;
            Latest->next = rem;
        }
        return Result;
    }
};