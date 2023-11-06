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
    vector<int> ans;
    void result(TreeNode* root,vector<int>&ans){
        // base 
        if(root==NULL) return;
        
        //Node push  
        ans.push_back(root->val);
        //left 
        result(root->left,ans);
        //right
        result(root->right,ans);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        //declare temp vect 
        vector<int> ans;
        // pass in result ans 
        result(root,ans);
        return ans;
    }
};