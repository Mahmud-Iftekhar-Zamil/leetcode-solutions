class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> umap;
        int n = edges.size();
        int key;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<edges[i].size();j++) {
                key = edges[i][j];
                if(umap.find(key)!=umap.end()){
                    umap[key]++;
                } else {
                    umap[key]=1;
                }
            }
        }
        
        for(auto x: umap) {
            if(x.second == n)
                return x.first;
        }
        
        return 0;
    }
};
