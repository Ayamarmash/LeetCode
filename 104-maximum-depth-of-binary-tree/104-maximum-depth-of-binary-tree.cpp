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
        int answL= 0;
        int answR= 0;
        if(root == NULL) return NULL;
        if(root-> left != NULL) answL= 1+ maxDepth(root-> left);
        if(root-> right != NULL) answR= 1+ maxDepth(root-> right);
        if(root-> left == NULL && root-> right == NULL) return 1;
        
        if(answL > answR) return answL;
        else return answR;
    }
};