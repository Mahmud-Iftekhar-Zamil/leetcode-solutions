class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<int> tmp;
        vector<vector<int>> res;
        
        for(int i=0;i<n;i++) {
            tmp = image[i];
            reverse(tmp.begin(),tmp.end());
            for(int j=0;j<tmp.size();j++) {
                tmp[j] = tmp[j]^1;
            }
            res.push_back(tmp);
        }
        return res;
    }
};
