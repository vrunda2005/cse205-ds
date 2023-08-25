class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int> nums,vector<int> temp,int index){
        if(index>=nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
         helper(nums,temp,index+1);
         temp.pop_back();
        while(index+1<nums.size() && nums[index]==nums[index+1]) index++;
        helper(nums,temp,index+1);
        }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       
        vector<int> temp;
        helper(nums,temp,0);
        return ans;
    }
};