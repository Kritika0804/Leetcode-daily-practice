class Solution {
    
    
public:
    
    int binarysearch(vector<int>& nums, int target,int start,int end,int res){
        int mid= start + (end-start)/2;
       
        if(start<=end){
            if(target==nums[mid]){
                return binarysearch(nums,target,start,mid-1,mid);
            }
            else if(target<nums[mid]){
                return binarysearch(nums,target,start,mid-1,res);
            }
            else{
                return binarysearch(nums,target,mid+1,end,res);
            }
        }
        return res;
    }
    
    int binarysearch1(vector<int>& nums, int target,int start,int end,int res){
        int mid= start + (end-start)/2;
       
        if(start<=end){
            if(target==nums[mid]){
                return binarysearch1(nums,target,mid+1,end,mid);
            }
            else if(target<nums[mid]){
                return binarysearch1(nums,target,start,mid-1,res);
            }
            else{
                return binarysearch1(nums,target,mid+1,end,res);
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans;
        int end=nums.size()-1;
        int res=-1;
        
       int res1 = binarysearch(nums,target,0,end,res);
        int res2 = binarysearch1(nums,target,0,end,res);
        ans.push_back(res1);
        ans.push_back(res2);
        
        return ans;
        
        
        
    }
};