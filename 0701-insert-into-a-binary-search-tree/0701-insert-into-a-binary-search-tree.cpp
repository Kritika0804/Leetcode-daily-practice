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
    TreeNode* insertIntoBST(TreeNode* root, int v) {
        if(root==NULL){
            TreeNode* temp=new TreeNode(v);
            return temp;
        }
        if(root->val < v){
            root->right=insertIntoBST(root->right,v);
        }
        else if(root->val > v){
            root->left=insertIntoBST(root->left,v);
        }
        return root;
    }
};