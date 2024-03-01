class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int one=0;
        int zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                zero++;
            }
        }
        
        return std::string(one - 1, '1') + std::string(zero, '0') + "1";
        
    }
};