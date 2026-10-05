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
  int maxSum = INT_MIN;
  int dfsSum(TreeNode* root){
    if(!root) return 0;

    int leftMax = max(0,dfsSum(root -> left));
    int rightMax = max(0,dfsSum(root -> right));
    maxSum = max(maxSum,leftMax + rightMax + root -> val);

    return root -> val + max(leftMax,rightMax);
  }
public:
    int maxPathSum(TreeNode* root) {
       dfsSum(root);
       return maxSum;
    }
};
