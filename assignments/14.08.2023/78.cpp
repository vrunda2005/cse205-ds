class Solution {
public:
vector<vector<int>> allsubsets; //global variable 
    void helper(vector<int> nums,vector<int> &subset,int i){
        if(i==nums.size()){
            allsubsets.push_back(subset);
            return;
        }
        helper(nums,subset,i+1); //without adding subset
        subset.push_back(nums[i]); 
        helper(nums,subset,i+1);  //with adding subset 
        subset.pop_back();        

    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int> temp;
       helper(nums,temp,0);
       sort(allsubsets.begin(),allsubsets.end());
       return allsubsets;
    }
};