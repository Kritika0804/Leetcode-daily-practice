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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>result;
        vector<int>cur;
        q.push(root);
        q.push(NULL);
        if(root==NULL){
            return {};
        }

        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();

            if(temp==NULL)
            {
                result.push_back(cur);
                cur.clear();
                if(q.size()>0)
                q.push(NULL);

            }
            else{
                cur.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                   q.push(temp->right);

                }
            }
        }
        
        reverse(result.begin(),result.end());
        
        return result;
    }
};