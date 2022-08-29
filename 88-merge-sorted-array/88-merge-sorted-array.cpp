class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0){
            return;
        }
       int i=0,j=0;
        while(i<m ){
            if(nums1[i]>nums2[0]){
                swap(nums1[i],nums2[0]);
                sort(nums2.begin(),nums2.end());
                
            }
            i++;
        }
        j=m;
        int k=0;
        while(j<(m+n) &&k<n){
            nums1[j]=nums2[k];
            k++;
            j++;
        }
    }
};