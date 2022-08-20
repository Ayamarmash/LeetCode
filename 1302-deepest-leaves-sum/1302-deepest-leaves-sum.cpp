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
    int deepestLeavesSum(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->right == NULL && root->left == NULL) return root->val;
        
        queue<TreeNode *> queue;
        queue.push(root);
        int sum;
        while (!queue.empty())
        { 
            int levelSize = queue.size();
            vector<int> currentLevel;
            sum= 0;
            for (int i = 0; i < levelSize; i++) {
                TreeNode *currentNode = queue.front();
                queue.pop();
                // add the node to the current level
                sum+= currentNode->val;
                // insert the children of current node in the queue
                if (currentNode->left != nullptr) {
                    queue.push(currentNode->left);
                }
                if (currentNode->right != nullptr) {
                    queue.push(currentNode->right);
                }
            }
        }
        return sum;
    }
};