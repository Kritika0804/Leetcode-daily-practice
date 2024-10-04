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
    int getmaxPathSum(TreeNode* root,int &maxsum){
        if(root==NULL){
            return 0;
        }
        int lsum = max(0,getmaxPathSum(root->left,maxsum));
        int rsum = max(0,getmaxPathSum(root->right,maxsum));
        int currsum = lsum+rsum+ root->val;
        maxsum = max(currsum,maxsum);
        return (root->val + max(lsum,rsum));
    }
    int maxPathSum(TreeNode* root) {
        int maxsum=INT_MIN;
        int sum = getmaxPathSum(root,maxsum);
        return maxsum;
    }
};