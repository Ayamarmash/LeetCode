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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* ans= NULL;
        if(root1 == NULL && root2 == NULL) return NULL;
        if(root1 != NULL && root2 == NULL)
        {
            ans= root1;
            ans-> right= mergeTrees(root1->right, NULL);
            ans-> left= mergeTrees(root1->left, NULL);
        }
        if(root1 == NULL && root2 != NULL)
        {
            ans= root2;
            ans-> right= mergeTrees(NULL, root2->right);
            ans-> left= mergeTrees(NULL, root2->left);
        }
        if(root1 != NULL & root2 != NULL)
        {
            TreeNode* tmp= new TreeNode(root1->val + root2->val);
            ans= tmp;
            ans-> right= mergeTrees(root1->right, root2->right);
            ans-> left= mergeTrees(root1->left, root2->left);
        }
        return ans;
    }
};