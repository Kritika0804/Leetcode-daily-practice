class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans(n,0);
        int l=0,r=n-1;
      
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
//         l=0;
//         r=n-1;
       
//         for(int i=ans.size()-1;i>=0;i++){
//             if(nums[l]>=nums[r]){
//                 ans[i]=nums[l];
//                 l++;
//             }
//             if(nums[l]<nums[r]){
//                 ans[i]=nums[r];
//                 r--;
//             }
            
//         }
        sort(nums.begin(),nums.end());
        
        return nums;
    }
};