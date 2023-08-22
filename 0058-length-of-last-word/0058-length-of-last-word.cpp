class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0;
        int cnt=0;
        int last = s.length()-1;
        if(s.length()==1 && s[i]!=' ' )return 1;
        if(s[last]==' '){
            while(s[last]==' '){
                last--;
            }
            
        }
        while(s[last]!=' ' ){
            cnt++;
            if(last==0)return cnt;
            last--;
        }
        return cnt;
    }
};