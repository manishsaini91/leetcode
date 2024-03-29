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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            for(int i=size(q);i;i--){
                TreeNode* cur=q.front();
                q.pop();
                if(i==1){
                    ans.push_back(cur->val);
                }
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
        }
        return ans;
    }
};