class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int &n : nums)
            ++count[n];
        for(pair<int,int> n : count)
            if(n.second%2 != 0)
                return false;
        return true;
    }
};