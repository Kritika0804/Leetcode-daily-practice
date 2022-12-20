//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    
    int prec(char c)
    {
        if(c=='+' || c=='-')
        return 1;
        if(c=='*' || c=='/')
        return 2;
        if(c=='^')
        return 3;
        else return -1;
    }
    string infixToPostfix(string s) {
        
        stack<char>st;
        string post;
        
        
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            
            
            if((c>='a' && c<='z') ||(c>='A' && c<='Z') || (c>='0' && c<='9'))
            {
                post+=c;
            }
            else if(c=='(')
            {
                st.push(c);
            }
            else if(c==')')
            {
                while(st.top()!='(')
                {
                     post+=st.top();
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty()&& prec(c)<=prec(st.top()))
                {
                    post+=st.top();
                    st.pop();
                }
                st.push(c);
                
            }
            
        }
        while(!st.empty()){
            post+=st.top();
            st.pop();
        }
        
        // Your code here
        return post;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends