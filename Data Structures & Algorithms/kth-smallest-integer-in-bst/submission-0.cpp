/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        queue<TreeNode*>q;
        q.push(root);

        vector<int>res;

        while(!q.empty()){
            TreeNode* node = q.front();

            if(node){
              q.pop();
              res.push_back(node -> val);

              if(node -> left) q.push(node -> left);
              if(node -> right) q.push(node -> right);
            }
        }
 
        sort(res.begin(),res.end());
        return res[k -1];
    }
};
