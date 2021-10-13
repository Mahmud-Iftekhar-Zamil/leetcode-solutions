constexpr bool sortCol(vector<int>& v1, vector<int>& v2) {
    if(v1[1]==v2[1] && v1[0]<v2[0])
        return (v1[1]<=v2[1]);
    else 
        return (v1[1]<v2[1]);
}

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<vector<int>> num(n, vector<int> (2,0));
        vector<int> res;
        
        for(int i=0;i<n;i++) {
            num[i][0] = i;
            num[i][1] = count(mat[i].begin(),mat[i].end(),1); 
        }
        
        sort(num.begin(),num.end(),sortCol);

        for(int i=0;i<k;i++)
            res.push_back(num[i][0]);
        
        return res;
    }
};
