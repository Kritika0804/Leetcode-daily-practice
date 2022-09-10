class Solution {
public:
    int dp[40];
    int helper(int n){
        if(n==0  ){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=helper(n-1)+helper(n-2);
    }
    
    
    int fib(int n) {
        int dp[40];
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};

// if(n==0) return 0;
//         if(n==1) return 1;
        
        
//         for(int i=0;i<=n;i++){
//             dp[i]=-1;
//         }
//         return helper(n);