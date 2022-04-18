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
    priority_queue <int, vector<int>, greater<int>> q;  
    void solve(TreeNode* root,int k){
        if(!root) return ;
        if(root->left)solve(root->left,k);
        q.push(root->val);
        if(root->right)solve(root->right,k);
        // return q;

    }
    int kthSmallest(TreeNode* root, int k) {
        solve(root,k);
        int n=1;
        while(n<k){
            q.pop();
            n++;
        }
        return q.top();
    }
    
};