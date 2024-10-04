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
    map<TreeNode*,TreeNode*> makeparents(TreeNode* root){
        queue<TreeNode*>q;
         map<TreeNode*,TreeNode*> mp;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left){
                mp[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right){
                mp[curr->right]=curr;
                q.push(curr->right);
            }
        }
        return mp;
        
    }
    
    TreeNode* findstart(TreeNode* root, int start){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            if(curr->val == start){
                return curr;
            }
            q.pop();
            if(curr->left){
                
                q.push(curr->left);
            }
            if(curr->right){
                
                q.push(curr->right);
            }
        }
        return NULL;
    }
    
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*,TreeNode*>mp = makeparents(root);
        TreeNode* startNode = findstart(root,start);
        // cout<<startNode->val<<endl;
        queue<TreeNode*>q;
        map<TreeNode*,bool>vis;
        q.push(startNode);
        vis[startNode]=true;
        int t=0;
        bool fl=0;
        
        while(!q.empty()){
            
            
            fl=0;
            int sz = q.size();
            for(int i=0;i<sz;i++){
                
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left && !vis[curr->left]){
                    q.push(curr->left);
                    vis[curr->left]=true;
                    fl=1;
                }
                 if(curr->right && !vis[curr->right]){
                    q.push(curr->right);
                     vis[curr->right]=true;
                    fl=1;
                }
                if(mp[curr] && !vis[mp[curr]]){
                    q.push(mp[curr]);
                    vis[mp[curr]]=true;
                    fl=1;
                }
            }
            if(fl==1)t++;
        }
        
        return t;
        
    }
};