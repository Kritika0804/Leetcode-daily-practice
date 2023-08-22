//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char,int>mp;
        string ans;
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        int max=0;
        
        for(auto i:mp){
            if(i.second>=max ){
                max=i.second;
                
                
                
            }
        }
        for(auto i:mp){
            if(max==i.second){
                ans+=i.first;
            }
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends