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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        vector<int> arr;
        for(int i=0; i<lists.size(); i++){
            ListNode* ptr = lists[i];
            while(ptr != NULL){
                arr.push_back(ptr->val);
                ptr = ptr->next;
            }
        }
        if(arr.size() == 0) return NULL;
        sort(arr.begin(), arr.end());
        ListNode* firstElement = new ListNode;
        ListNode* latestElement = new ListNode;
        latestElement->val = arr[0];
        latestElement->next = NULL;
        firstElement = latestElement;
        for(int i=1; i<arr.size(); i++){
            ListNode* tmp = new ListNode;
            tmp->val = arr[i];
            tmp->next = NULL;
            latestElement->next = tmp;
            latestElement = tmp;
        }
        return firstElement;
    }
};