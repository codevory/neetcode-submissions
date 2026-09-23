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
        vector<int> node;

        for(ListNode* lst : lists){
            while(lst){
             node.push_back(lst -> val);
             lst = lst -> next;
            }
        }

        sort(node.begin(),node.end());

        ListNode res(0);
        ListNode* curr = &res;

        for(int val: node){
            curr -> next = new ListNode(val);
            curr = curr -> next;
        }

        return res.next;
    }
};
