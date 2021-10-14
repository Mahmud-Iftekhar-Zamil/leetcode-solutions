class Solution {
public:
    int xorOperation(int n, int start) {
        int res,i;
        res = start; i = 1;
        
        while(i<n) {
            res ^= (start+2*i);
            i++;
        }
        
        return res;
    }
};
