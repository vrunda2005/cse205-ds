/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         vector<vector<int>> ans;
        map<int,map<int,vector<int>>> mp; // HD,<lev,nod>
        queue<pair<TreeNode*,pair<int,int>>> q;// node,pair<hd,level>
        if(root==NULL) return ans;
        q.push({root,{0,0}});

        while(!q.empty()){
            pair<TreeNode*,pair<int,int>> temp=q.front();
            q.pop();
            TreeNode* tempfornt=temp.first;

            int hd=temp.second.first;
            int level=temp.second.second;

            mp[hd][level].push_back(tempfornt->val);

            if(tempfornt->left){
                q.push({tempfornt->left,{hd-1,level+1}});
            }
            if(tempfornt->right){
                  q.push({tempfornt->right,{hd+1,level+1}});
            }
        }
        // vector<int> ans;
        for(auto j:mp){
            for(auto k:j.second){
                 for(auto x:k.second){
                      ans.push_back(x);
                 }
            }
        }
        return ans;
    }
};