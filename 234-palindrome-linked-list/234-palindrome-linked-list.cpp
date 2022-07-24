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
    bool isPalindrome(ListNode* head) {
        bool Result= false;
        ListNode* newList= new ListNode();
        ListNode* Current= head;
        //int Size= 0;
        while(Current != NULL)
        {
            ListNode* newNode= new ListNode(Current->val);
            newNode->next= newList;
            newList= newNode;
            Current= Current->next;
            //Size++;
        }
        while(newList->next !=NULL && head->next != NULL)
        //for(int i=0; i<Size; i++)
        {
            if(newList->val == head->val)
            {
                Result= true;
                head= head->next;
                newList= newList->next;
            }
            else return false;
        }
        return true;
    }
};