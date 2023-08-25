class Solution {
public:
    vector<vector<int>> ans;
void helper(int n,int k,vector<int>&temp){
        if(k==temp.size()){
            ans.push_back(temp);
            return;
        }
        if(n==0) return;
        temp.push_back(n); 
        helper(n-1,k,temp);
        temp.pop_back();
        helper(n-1,k,temp);
    } 
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        helper(n,k,temp);
        return ans;
    }
};