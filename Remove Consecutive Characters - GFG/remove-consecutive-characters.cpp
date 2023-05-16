//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string s;
        char prev=S[0];
        if(S.length()==0){
            return NULL;
        }
        s+=S[0];
        for(int i=1;i<S.length();i++){
            if(S[i]!=prev){
                prev=S[i];
                s+=prev;
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends