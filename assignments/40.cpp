class Solution {
public:
    vector<vector<int>> ans;
void helper(vector<int>& candidates, int target,vector<int> temp,int index){  
    
    if(target==0){
        ans.push_back(temp);
        return;
    }
    
    for(int i=index;i<candidates.size();i++){
        if(i>index && candidates[i]==candidates[i-1]) continue;
        if(candidates[i]>target) break;
        temp.push_back(candidates[i]);
        helper(candidates,target-candidates[i],temp,i+1);
        temp.pop_back();
    }
}
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        helper(candidates,target,temp,0);
        return ans;
    }
};