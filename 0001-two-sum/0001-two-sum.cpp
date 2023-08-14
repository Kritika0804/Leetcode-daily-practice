class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        
         for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
             if(mp.find(req)!=mp.end() && mp[req]!=i){
                 return {mp[req],i};
             }
        }
        
        return {};
        
        
        
    }
};