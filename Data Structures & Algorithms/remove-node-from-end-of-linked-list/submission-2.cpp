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

       ListNode* curr = head;
       int size = 0;
       while(curr){
        size += 1;
        curr = curr -> next;
       }

       curr = head;
       int node_idx_to_remove = size - n;

       if(node_idx_to_remove == 0){
        return head -> next;
       }
       
       for(int i = 0; i < size - 1; i++){
        if((i + 1) == node_idx_to_remove){
            curr -> next = curr -> next -> next;
        }

        curr = curr -> next;
       }

       return head;
    }
};
