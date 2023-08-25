class Solution {
public:
vector<vector<int>> ans;
void helper(vector<int>& candidates, int target,vector<int> temp,int currsum,int index){  
    if(currsum>target){
        return;
    }
    if(currsum==target){
        ans.push_back(temp);
        return;
    }
    for(int i=index;i<candidates.size();i++){
        temp.push_back(candidates[i]);
        currsum+=candidates[i];
        helper(candidates,target,temp,currsum,i);
        temp.pop_back();
        currsum-=candidates[i];

    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        helper(candidates,target,temp,0,0);
        return ans;
    }
};