class Solution {
public:
    constexpr bool isOdd(int val) {return (val&1);}
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> V(n,0);
        
        sort(nums.begin(),nums.end());
        
        for(int i=0,j=n-1,k=0;k<n;k++) {
            if(isOdd(nums[k])) 
                V[j--] = nums[k];
            else
                V[i++] = nums[k];
        }
        return V;
    }
};
