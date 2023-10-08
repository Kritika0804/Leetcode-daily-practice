class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int i=0,j=0;
        double sum=0;
        double maxsum=INT_MIN;
        double maxavg=INT_MIN;
        double avg;
        double size=nums.size();
        while(j<size){
            sum=sum+nums[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
               
                avg=sum/k;
                maxavg=max(maxavg,avg);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return maxavg;

    }
};