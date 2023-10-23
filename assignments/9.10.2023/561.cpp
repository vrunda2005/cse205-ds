class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=0;
        int mini=INT_MAX;
        int i=0;
        int j=1;
        for(i=0,j=1; i<n-1,j<n;i+=2,j+=2){
            mini=min(nums[i],nums[i+1]);
            sum+=mini;                        
        }
        return sum;
    }
};