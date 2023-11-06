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
    int maxDepth(TreeNode* root) {
        //recursive way 
        //base when stop 
        if(root==NULL) return 0;
        
        else {
            // 1 for root and pass to check what is the hegiht of left child and right child 
            int ans=1+max(maxDepth(root->left),maxDepth(root->right));
            return ans;
        }
    }
};