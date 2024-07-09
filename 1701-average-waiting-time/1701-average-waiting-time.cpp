class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        
        double total=0;
        double chef=customers[0][0];
        for(int i=0;i<customers.size();i++){
                if(chef>=customers[i][0]){
                    chef += customers[i][1];
                }
            else{
                chef = customers[i][0];
                chef += customers[i][1];
            }
                
                cout<<chef-customers[i][0]<<" ";
                total += (chef-customers[i][0]); 
                
            
        }
        return (double)total/ customers.size();
    }
};