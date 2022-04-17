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
    TreeNode* dummy=new TreeNode(0);
    TreeNode *ans=dummy;
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        if(root->left) increasingBST(root->left);
        dummy->right=new TreeNode(root->val);
        dummy=dummy->right;
        if(root->right) increasingBST(root->right);
        return ans->right;
    }
};