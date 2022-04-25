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
//     vector<vector<int>> ans;
//     void levelOrder(vector<vector<int>> ans,TreeNode* root,int level){
//         if(root==NULL){
//             return;
//         }
        
//     }
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
//         levelOrder(ans,root,0);
//         return ans;
//     }
     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;
         if(root==NULL) return ans;
         queue<TreeNode*> q;
         q.push(root);
         bool flag=false;
         while(!q.empty()){
             vector<int> v;
             int count=q.size();
             for(int i=1;i<=count;i++){
                 TreeNode* node=q.front();
                 q.pop();
                 if(flag){
                     v.insert(v.begin(),node->val);
                     
                 }
                 else{
                     v.insert(v.end(),node->val);
                     
                 }
                 if(node->left) q.push(node->left);
                 if(node->right) q.push(node->right);
             }
             flag=!flag;
             ans.push_back(v);
         }
          return ans;
     }
   
    
};