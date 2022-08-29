class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int r;
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++){
            if(v[i-1]==v[i]){
                r=v[i];
            }
        }
        return r;
        
    } 
};