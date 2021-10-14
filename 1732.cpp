class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> res;
        res.push_back(0);
        
        for(int i=1;i<=n;i++){
            res.push_back(res[i-1]+gain[i-1]);
        }
        
        sort(res.begin(),res.end(),greater<int>());
        return res[0];
    }
};
