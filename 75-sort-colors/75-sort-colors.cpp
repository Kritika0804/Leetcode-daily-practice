class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z= count(nums.begin(),nums.end(),0);
        int o= count(nums.begin(),nums.end(),1);
        int t= count(nums.begin(),nums.end(),2);
        
        for(int i=0;i<z;i++) nums[i]=0;
        for(int i=z;i<z+o;i++) nums[i]=1;
        for(int i=z+o;i<z+o+t;i++) nums[i]=2;

    }
};