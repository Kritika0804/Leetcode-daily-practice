class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n = nums2.size();
      vector < int > nge(n, -1);
      stack < int > st;
      for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= nums2[i ]) {
          st.pop();
        }

        if (i < n) {
          if (!st.empty()) nge[i] = st.top();
        }
        st.push(nums2[i ]);
      }
        
        vector<int>ans(nums1.size());
       unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=nge[i];
        }
        for(int i=0;i<nums1.size();i++){
            ans[i]=(mp[nums1[i]]);
        }
        return ans;
    }
};