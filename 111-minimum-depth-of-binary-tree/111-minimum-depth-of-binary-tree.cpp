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
    int minDepth(TreeNode* root) {
        int minval=INT_MAX;
        return helper(root);
    }
    int helper(TreeNode* curr){
        if(curr==NULL) return 0;
        int left=helper(curr->left);
        int right=helper(curr->right);
        return (left==0 ||right==0)?left+right+1:min(left,right)+1;
    }
};