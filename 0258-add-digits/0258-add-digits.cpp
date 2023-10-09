class Solution {
public:
    int addDigits(int n) {
        
        long long num=n;
        while(num>9){
            long long sum=0;
            while(num){
                sum=sum+(num%10);
                num=num/10;
            }
            num=sum;
        }
        return num;
    }
};