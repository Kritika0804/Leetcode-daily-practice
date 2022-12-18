//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    queue<int>q1;
    stack<int>st;
    
    while(k)
    {
        int val =q.front();
        q.pop();
        st.push(val);
        k--;
        
    }
    
    while(!q.empty())
    {
        int val=q.front();
        q.pop();
        q1.push(val);
    }
    
    while(!st.empty())
    {
        int val=st.top();
        st.pop();
        q.push(val);
    }
    
     while(!q1.empty())
    {
        int val=q1.front();
        q1.pop();
        q.push(val);
    }
    
    return q;
}