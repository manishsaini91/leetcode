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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        while(!q.empty()){
            int x=q.size();
            int maxi=INT_MIN;
            while(x--){
                
                TreeNode* node=q.front();
                q.pop();
                if(maxi<node->val) maxi=node->val;
                // q.push(node);
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};