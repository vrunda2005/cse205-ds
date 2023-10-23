class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        vector<int> temp(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {        
           temp[nums[i]-1]++;           
            
        }
        int a=0,b=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0){
                b=i+1;
            }
            if(temp[i]==2){
                a=i+1;
            }
        }
       return{a,b};
    }
};