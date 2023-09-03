class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){   
                count+=1;
                sum= max(sum,count);
            }
            else{
                count=0;
            }
        } 
        return sum;
    }
};