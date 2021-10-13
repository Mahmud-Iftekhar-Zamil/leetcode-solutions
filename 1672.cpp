class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int s=0;
        int res = INT_MIN;
        int n=accounts.size();
        for(int i=0;i<n;i++) {
            s=0;
            s=accumulate(accounts[i].begin(),accounts[i].end(),s);
            if(s > res) res = s;
        }
        return res;
    }
};
