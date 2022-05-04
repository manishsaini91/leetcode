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
    int maxDepth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int rootLeftHt=maxDepth(root->left);
        int rootRightHt=maxDepth(root->right);
        int rootDiff=abs(rootLeftHt-rootRightHt);
        return rootDiff<=1 and isBalanced(root->left) and isBalanced(root->right);
        
    }
};