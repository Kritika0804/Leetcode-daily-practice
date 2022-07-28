class Solution {
    public int maxSubArray(int[] arr) {
        if(arr.length==1){
            return arr[0];
        }
        int currsum=arr[0];
        int maxsum=arr[0];
        for(int i=1;i<arr.length;i++){
            if(currsum<0){
                currsum=0;
            }
            currsum=currsum+arr[i];
            if(currsum>maxsum){
                maxsum=currsum;
            }
            
        }
        return maxsum;
    }
}