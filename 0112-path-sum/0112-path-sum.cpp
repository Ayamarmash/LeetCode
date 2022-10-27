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
    bool hasPathSum(TreeNode* Root, int targetSum) {
        if(Root == NULL) return false;
        if(Root->left == NULL && Root->right == NULL && targetSum == Root->val) return true;
        return (hasPathSum(Root->left, targetSum- Root->val) || hasPathSum(Root->right, targetSum- Root->val));
    }
};