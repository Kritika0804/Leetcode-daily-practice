class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>n1;
        vector<int>n2;
        int n=nums.size();
        k=k%n;
        
        if(nums.size()==1 ){
            return;
        }
        if(nums.size()<k ){
            reverse(nums.begin(),nums.end());
            return;
        }
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        // nums.clear();
        //  for(int i=0;i<n1.size();i++){
        //     nums.push_back(n1[i]);
        // }
        // for(int i=0;i<n2.size();i++){
        //     nums.push_back(n2[i]);
        // }
        
        
    }
};