//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reversestr(string S,int s,int e){
        while(s<=e){
            char temp=S[e];
            S[e]=S[s];
            S[s]=temp;
            s++;
            e--;
        }
        return S;
    }
    string reverseWords(string S) 
    { 
        // code here 
        reverse(S.begin(),S.end());
        // cout<<S<<endl;
        int s=0,e=0;
        for(int i=0;i<S.length();i++){
            if(S[i]=='.'){
                
                e=i;
                e--;
                S=reversestr(S,s,e);
                i++;
            s=i;
            }
            else if(i==(S.length()-1)){
                e=i;
                S=reversestr(S,s,e);
               
            }
            
            
        }
        return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends