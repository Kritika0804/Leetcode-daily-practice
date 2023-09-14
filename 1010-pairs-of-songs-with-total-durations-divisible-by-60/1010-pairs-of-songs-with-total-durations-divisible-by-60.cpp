class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<time.size();i++){
            int x=time[i]%60;
            if(x==0)
            {
                count+=mp[x]; 
            }
           else if(mp.find(60-x)!=mp.end()){
                count+=mp[60-x];
                
           }
           mp[x]++;
        }
        cout<<count;
        return count;
    }
};