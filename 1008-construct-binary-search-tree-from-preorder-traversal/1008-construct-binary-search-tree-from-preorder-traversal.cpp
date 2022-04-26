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
    int nodeIdx;
    TreeNode* bstHelper(vector<int> preorder,int start,int end){
        if(nodeIdx==preorder.size()|| preorder[nodeIdx]<start||preorder[nodeIdx]>end){
            return NULL;
        }
        int val=preorder[nodeIdx++];
        TreeNode* node=new TreeNode(val);
        node->left=bstHelper(preorder,start,val);
        node->right=bstHelper(preorder,val,end);
        return node;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0){
            return NULL;
        }
        nodeIdx=0;
        return bstHelper(preorder,INT_MIN,INT_MAX);
    }
};