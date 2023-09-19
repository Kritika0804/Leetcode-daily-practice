class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int idx=-1;
        int n=hours.size();
        sort(hours.begin(),hours.end());
        for(int i=0;i<n;i++){
            if(hours[i]>=target) return n-i;
        }
        return 0;
    }
};