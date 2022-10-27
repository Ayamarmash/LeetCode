/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL) return 0;
        vector<Node*> ch = root->children;
        int ans = 1;
        for(int i=0; i < ch.size(); i++){
            ans = max(ans, 1 + maxDepth(root->children[i]));
        }
        return ans;
    }
};