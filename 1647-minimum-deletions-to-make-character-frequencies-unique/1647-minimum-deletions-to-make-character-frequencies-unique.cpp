class Solution {
public:
    int minDeletions(string s) {
        unordered_map<int,int> hm;
        vector<int> vec(26,0);
        vector<int>v;
        
        
        for(char c:s){                   
            vec[c-'a']++;}
        
       for(int i=0;i<26;i++){
           if(vec[i]>0){
               v.push_back(vec[i]);
           }
       }
        int cnt=0;
        sort(v.begin(),v.end(),greater <>());
        int maxf=v[0]-1;
        for(int i=1;i<v.size();i++){
            
            if(maxf<v[i]){
                    if(maxf>0){
                        cnt+=(v[i]-maxf);
                    }
                    else{
                        cnt+=v[i];
                    }
                    
                
                
                // cout<<v[i];
               
            }
            maxf=min(maxf-1,v[i]-1);
        }
        return cnt;
    }
};