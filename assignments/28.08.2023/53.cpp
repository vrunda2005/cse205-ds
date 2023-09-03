class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       long long sum=0;
        long long maximum=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maximum){
                maximum=max(sum,maximum);
            }

            if(sum<0)
                sum=0;     
        }
        return maximum;
    }
};