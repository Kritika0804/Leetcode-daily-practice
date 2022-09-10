class Solution {
public:
    
    int dp[40];
    
    int helper(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=helper(n-1)+helper(n-2)+helper(n-3);
    }
    
    
    int tribonacci(int n) {
        // for(int i=0;i<=n;i++){
        //     dp[i]=-1;
        // }
        // return helper(n);
        
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        // dp[3]=2;
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};