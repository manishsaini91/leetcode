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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> ans;
        double sum=0.0;
        
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            sum=0.0;
            int c=n;
            while(n--){
                
                TreeNode* node=q.front();
                q.pop();
                sum=sum+node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
                
            }
            ans.push_back(sum/c);
        }
        return ans;
    }
};