class Solution {
public:
    int maxProfit(vector<int>& v ){
        int mp = INT_MIN, mtn=v[0];
        for(auto &i : v){
            mtn=min(mtn, i);
            int p=i-mtn;
            mp=max(mp,p);
        }
        return mp;
    }
};