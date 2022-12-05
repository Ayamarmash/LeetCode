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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> queue;
        vector<double> answer;
        queue.push(root);
        while(!queue.empty()){
            double rowSum = 0;
            double rowSize = queue.size();
            for(int i=0; i < rowSize; i++){
                TreeNode* tmp = queue.front();
                rowSum += tmp->val;
                if(tmp->right != NULL) queue.push(tmp->right);
                if(tmp->left != NULL) queue.push(tmp->left);
                queue.pop();
            }
            answer.push_back(rowSum/rowSize);
        }
        return answer;
    }
};