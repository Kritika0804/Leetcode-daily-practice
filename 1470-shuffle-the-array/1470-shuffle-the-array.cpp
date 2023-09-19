class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>v(2*n);
        for(int i=0,j=n,k=0;i<n,j<2*n,k<2*n;i++,j++,k++){
            v[k]=nums[i];
            k++;
            v[k]=nums[j];
        }
        return v;
    }
};