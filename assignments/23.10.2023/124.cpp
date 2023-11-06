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
    int maxPath(TreeNode* root,int &maxi){
        if(root==NULL) return 0;
        int left= max(0,maxPath(root->left,maxi));   //from left comes negative consider 0
        int right=max(0,maxPath(root->right,maxi));        
        maxi=max(maxi,root->val+left+right);         
        return max(left,right)+root->val;  // when other sub childeren comes which path to choose right or left 
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxPath(root,maxi);
        return maxi;
    }
};