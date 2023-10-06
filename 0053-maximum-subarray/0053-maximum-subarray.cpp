class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        // if(arr.size()==1){
        //     return arr[0];
        // }
        int currsum=arr[0];
        int maxsum=arr[0];
        for(int i=1;i<arr.size();i++){
            
            if(currsum<0){
                currsum=0;
            }
            currsum+=arr[i];
            if(currsum>maxsum){
                maxsum=currsum;
            }
        }
        return maxsum;
    }
};