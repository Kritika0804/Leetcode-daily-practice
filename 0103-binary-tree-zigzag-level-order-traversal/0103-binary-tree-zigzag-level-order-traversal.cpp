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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        queue<TreeNode*>q;
    int n=0;
         if (!root) return result;
        q.push(root);
        q.push(NULL);
         vector<int>cur;

        while(!q.empty())
        {
           
           TreeNode* temp=q.front();
           q.pop();
          

           if(temp==NULL)
           {
               if(n%2!=0){
                   reverse(cur.begin(),cur.end());
               }
               result.push_back(cur);
               cur.clear();
               if(q.size()>0)
               q.push(NULL);

    n++;


           }else{

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
        

        return result;
    }
};