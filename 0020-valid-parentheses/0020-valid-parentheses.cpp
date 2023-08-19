class Solution {
public:
    bool isValid(string s) {
//         stack<char>st;
//         int i=0;
//         while(s.length()!=0){
//             if(s[i]=='(' || s[i]=='[' || s[i]=='{'  ){
//                 st.push(s[i]);
//                  i++;
//             }
//             else if(!st.empty()){
//                 if(s[i]==')' && st.top()=='('){
//                 st.pop();
//                      i++;
//             }
//             else if(s[i]==']' && st.top()=='['){
//                 st.pop();
//                  i++;
//             }
//             else if(s[i]=='}' && st.top()=='{'){
//                 st.pop();
//                  i++;
//             }
//             else{
//                 return false;
//             }
//             }
//             else{
//                 return false;
//             }
            
           
//         }
//         if(st.empty()){
//             return true;
//         }
//         return false;
         stack<char>st;
        for(char c:s){
            if(c=='(' || c=='[' || c=='{'){
                st.push(c);
            }
            else if(!st.empty()){
                if(c==')' && st.top()=='('){
                    st.pop();
            }
            else if(c==']' && st.top()=='['){
                    st.pop();
            }
            else if(c=='}' && st.top()=='{'){
                    st.pop();
            }
            else{
                return false;
            }

            }
            else{
                return false;
            }
            
        }
        if(st.empty()){
                return true;
        }
        return false;
        
    }
};