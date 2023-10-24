class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        vector<int>v(n);
       
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    cnt++;
                }
            }
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[i]){
                    cnt++;
                }
            }
            v[i]=cnt;
        }
        return v;
    }
};