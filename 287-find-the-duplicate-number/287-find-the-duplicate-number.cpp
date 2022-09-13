class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int ans;
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++){
            if(v[i-1]==v[i]){
                ans= v[i];
            }
        }
        return ans;
    } 
};