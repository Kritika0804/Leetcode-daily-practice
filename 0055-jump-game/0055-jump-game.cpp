class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        int fpos = n-1;
        for(int i=n-2;i>=0;i--){
            if(i+nums[i]>= fpos){
                fpos=i;
            }
        }
        if(fpos == 0 ){
            return true;
        }
        return false;
    }
};