class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>ans;
        unordered_map<int,string>mp;
        for(int i=0;i<names.size();i++){
            mp[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            ans.push_back(mp[heights[i]]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};