class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxi = 0;
        vector<bool>ans;
        for(int i=0;i<n;i++){
            
            maxi = candies[i]+extraCandies;
            bool flag=true;
            if(i!=0){
            for(int j=0;j<i;j++){
               if(candies[j]>maxi){
                   flag=false;
                   continue;
               } 
            }
            }
            if(i+1<n){
            for(int j=i+1;j<n;j++){
               if(candies[j]>maxi){
                   flag=false;
                   continue;
               } 
            }
                
                
            
            }
            ans.push_back(flag);
        }
        return ans;
    }
};