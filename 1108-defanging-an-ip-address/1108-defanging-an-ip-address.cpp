class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        // int i=0;
       for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                ans=ans+"[.]";
            }
            else{
                ans=ans+address[i];
            }
            
        }
        return ans;
    }
};