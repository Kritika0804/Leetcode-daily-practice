class Solution {
public:
    int reverse(int x) {
//        long num = 0;
        
//         while(x!=0){
//             long rem = x%10;
//             num = num*10+ rem;
//             x = x/10;
//         }
//         // simple check for bounds condition
//         if(num>INT_MAX || num<INT_MIN)
//             return 0;
//         return num; 
        vector<int>first;
        vector<int>second;
     
        
        
        
      
           while(x!=0)
        {
            int rem=x%10;
            first.push_back(rem);
            x=x/10;
            
        }
      
      
        
        long s=first.size();
        long m=s-1;
        long sum=0;
        int j=0;
        for(int i=m;i>=0;i--)
        {
            sum+=(first[i]*(pow(10,j)));
            j++;
            
        }
         if(sum>=2147483647)
        {
            return 0;
        }
        else if(sum<=(-2147483648))
        {
            return 0;
        }
        else{
               return sum;
            
        }
        
    }
};