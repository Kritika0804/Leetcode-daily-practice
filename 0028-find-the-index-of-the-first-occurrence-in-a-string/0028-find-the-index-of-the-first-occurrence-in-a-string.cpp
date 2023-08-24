class Solution {
public:
    int strStr(string haystack, string needle) {
        
            int i=0;
            int ans=-1;
            bool flag=0;
        
            for( i=0;i<haystack.length();i++){
                if(needle[0]==haystack[i]){
                    flag=1;
                    for(int j=0;j<needle.length();j++){
                        if(needle[j]!=haystack[i+j]){
                            flag=0;
                            break;
                        }
                    }
                    if(flag==1)return i;
                }
            }
        return -1;
        
    }
};