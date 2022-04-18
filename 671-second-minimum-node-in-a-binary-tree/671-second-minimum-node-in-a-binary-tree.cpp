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
    priority_queue<int,vector<int> ,greater<int>> q;
    void solve(TreeNode* root){
        if(!root) return ;
        if(root->left) solve(root->left);
        q.push(root->val);
        if(root->right) solve(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        solve(root);
        int t=q.top();
        while(!q.empty()){
            if(q.top()==t){
                q.pop();
            }
             if(q.empty()){
                return -1;
                 break;
            }
            if(q.top()!=t){
                break;
            }
        }
        return q.top();
    }
};