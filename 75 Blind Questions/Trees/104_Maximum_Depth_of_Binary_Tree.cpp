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
    int maxDepth(TreeNode* root) {
        
        if(root == NULL) return 0;
        int MaxLeft= 1;
        int MaxRight= 1;
        
        MaxRight+= maxDepth(root->right);
        MaxLeft+= maxDepth(root->left);
        if(MaxRight > MaxLeft) return MaxRight;
        return MaxLeft;
    }
};
