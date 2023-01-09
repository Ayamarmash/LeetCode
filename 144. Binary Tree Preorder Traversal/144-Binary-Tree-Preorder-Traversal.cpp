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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL) return {};
        vector<int> ans = {};
        ans.push_back(root->val);
        // push the left then right
        vector<int> tmp;
        if(root->left){
            tmp = preorderTraversal(root->left);
            ans.insert(ans.end(), tmp.begin(), tmp.end());
        }
        if(root->right){
            tmp = preorderTraversal(root->right);
            ans.insert(ans.end(), tmp.begin(), tmp.end());
        }
        return ans;
    }
};
