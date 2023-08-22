//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int helper(int arr[],int x,int start,int end){
	    while(start <= end){
            int mid = (((end-start)/2)+ start);
            if(arr[mid] == x){
                return mid;
            }
            else if(arr[mid] > x){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
	}
		
	int count(int arr[], int n, int x) {
	    // code here
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    return mp[x];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends