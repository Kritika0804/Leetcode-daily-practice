class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        if(s.length()!= t.length()){
            return false;
        }
        for (char c : s) {
            mp1[c]++;
        }
         for (char c : t) {
            mp2[c]++;
        }
        for (char c : s) {
            if(mp1[c]!=mp2[c]){
                return false;
            }
        }
        return true;

    }
};