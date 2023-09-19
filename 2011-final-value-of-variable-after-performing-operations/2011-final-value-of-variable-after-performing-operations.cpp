class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=0;
        int s=operations.size();
        for(int i=0;i<s;i++){
            if(operations[i]=="--X" || operations[i]=="X--"){
                n--;
            }
            else{
                n++;
            }
        }
        return n;
        
    }
};