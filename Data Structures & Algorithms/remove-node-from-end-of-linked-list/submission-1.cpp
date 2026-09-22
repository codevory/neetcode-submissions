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
        if(!head) return head;
        if(n == 1 && head -> next == nullptr) return {};

        vector<ListNode*>arr;
        ListNode* temp = head;
        while(temp){
           arr.push_back(temp);
           temp = temp -> next;
        }

       int arr_size = arr.size();
       int to_remove = arr_size - n;
       if(to_remove == 0){
        return head -> next;
       }
       arr[to_remove - 1] -> next = arr[to_remove] -> next;

       return head;
   
    }
};
