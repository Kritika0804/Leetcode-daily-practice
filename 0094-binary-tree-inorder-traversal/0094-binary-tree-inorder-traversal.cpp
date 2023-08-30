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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vc;
        inorder(root,vc);
        return vc;
    }

    private:
    void inorder(TreeNode* root,vector<int>&vc)
    {
        if(root==NULL)
        {
            return;
        }

        inorder(root->left,vc);
        vc.push_back(root->val);
        inorder(root->right,vc);
    }
};