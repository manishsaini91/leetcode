/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL)
            return "X";
        string leftSerialized=serialize(root->left);
        string rightSerialized=serialize(root->right);
        return to_string(root->val)+" "+leftSerialized+" "+rightSerialized;
    }

    TreeNode* deserializeHelper(queue<string> &q){
        string valueForNode=q.front();
        q.pop();
        if(valueForNode=="X") return NULL;
        TreeNode* newNode=new TreeNode(stoi(valueForNode));
        newNode->left=deserializeHelper(q);
        newNode->right=deserializeHelper(q);
        return newNode;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        stringstream inp(data);
        string token;
        while(inp >> token) {
            q.push(token);
        }
        return deserializeHelper(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));