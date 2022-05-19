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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return helper(p,q);
    }
    bool helper(TreeNode* p,TreeNode* q){
        if(p==NULL and q==NULL) return true;
        if(p==NULL or q==NULL) return false;
        if(p->val!=q->val) return false;
        bool ans=helper(p->left,q->left);
        bool ans2 =helper(p->right,q->right);
        return ans and ans2;
    }
};