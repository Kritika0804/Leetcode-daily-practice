class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        int i=0;
        while(!st.empty()){
            char x=st.top();
            st.pop();
            s[i]=x;
            i++;
        }
        
    }
};