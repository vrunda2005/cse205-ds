class Solution {
public:
    vector<string> ans;
    void helper(int open,int close,string tmp){
        if(open==0 && close==0){
            ans.push_back(tmp);
            return;
        }
        if(open>0){
            tmp.push_back('(');
            helper(open-1,close,tmp);
            tmp.pop_back();
        }
        if(close>0){
            if(open<close){
            tmp.push_back(')');
            helper(open,close-1,tmp);
            tmp.pop_back();
        }
        }
    }
    vector<string> generateParenthesis(int n) {
        string tmp;
        helper(n,n,tmp);
        return ans;
    }
};