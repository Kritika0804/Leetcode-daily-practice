class Solution {
public:
    int dp[46];
    
    int helper(int n){
        if(n==0){
            return 1;
        }
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=helper(n-1)+helper(n-2);
    }
    
    int climbStairs(int n) {
        
        
        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }
        dp[0]=1;
        return helper(n);
    }
};