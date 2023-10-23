class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> ans;
         vector<int> temp=nums;
        unordered_map<int,int> ump;
        sort(nums.begin(),nums.end(),greater<int>());
        
        //storing in hash map from greter
        for(int i=0;i<k;i++){
            ump[nums[i]]++;
        }
        
        
        //from temp varaible cheecking if element is present in hash map or what 
        for(auto x: temp){
            if(ump[x]-->0){
                ans.push_back(x);
            }
        }
        
        
        return ans;
    }
};