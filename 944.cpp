class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n_col = strs[0].length();
        int n_row = strs.size();
        string t;
        int c_sort=0;
        
        for(int col=0;col<n_col;col++) {
            t="";
            for(int row=0;row<n_row;row++) {
                t+=strs[row][col];
            }
            if(!is_sorted(t.begin(),t.end())) c_sort++;
        }
        return c_sort;
    }
};
