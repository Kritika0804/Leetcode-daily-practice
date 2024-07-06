class Solution {
public:
    int passThePillow(int n, int time) {
        n=n-1;
        int completed = time/n;
        int remaining = time % n;
        
        if(completed%2!=0){
            return n-remaining+1;
        }
        else{
            return remaining+1;
        }
    }
};