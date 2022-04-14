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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL){
            return NULL;
        }
        else if(root->val==val)
            return root;
        else{
            TreeNode* temp=root;
            if(temp->val<val){
                temp=temp->right;
                return searchBST(temp,val);
            }
            else{
                temp=temp->left;
                return searchBST(temp,val);
            }
        }
    }
};