class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i+=2)
            res+=min(nums[i],nums[i+1]);
        
        return res;
    }
};
