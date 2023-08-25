class Solution {
public:
vector<vector<int>> ans;
    void helper(vector<int> nums,int index){
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int k=index;k<nums.size();k++){
            swap(nums[index],nums[k]);
            helper(nums,index+1);
            swap(nums[index],nums[k]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int index;
        helper(nums,0);
        return ans;
        
    }
};