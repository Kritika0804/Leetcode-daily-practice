class Solution {
public:
    int findDuplicate(vector<int>& v) {
        unordered_map<int,int>mp;
        int r=0;
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
        }
        for(auto x:mp){
            if(x.second>1){
                r=x.first;
            }
        }
        return r;
        
    } 
};