/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var maxDepth = function(root) {
    if(root === null) return 0;
    if(!root.left && !root.right) return 1;

    let maxDepthLeft = 1 + maxDepth(root.left);
    let maxDepthRight = 1 + maxDepth(root.right);
    
    return maxDepthLeft > maxDepthRight ?  maxDepthLeft : maxDepthRight;
};