class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int i,sum=0;
        
        for(i=0;i<n;i++) {
            sum += (((i+1)*(n-i)+1)/2)*arr[i];
        }
        
        return sum;
    }
};
