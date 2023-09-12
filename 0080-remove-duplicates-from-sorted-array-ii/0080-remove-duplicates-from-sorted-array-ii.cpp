class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=0,i=0;
        int cnt;
        while(i<n){
            int curr=nums[i];
            cnt=0;
            while(i<n && nums[i]==curr){
               
                    cnt++;
                    i++;
                
                
            }
            if(cnt>1){
                nums[k]=curr;
                k++;
                nums[k]=curr;
                k++;
            }
            else{
                nums[k]=curr;
                k++;
            }
            
        }
        return k;
    }
};