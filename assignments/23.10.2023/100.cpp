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
    void preOrder(TreeNode* root,vector<int>& pre){
        if(root!=NULL){
            pre.push_back(root->val);
            preOrder(root->left,pre);
            preOrder(root->right,pre);
        }else{
            pre.push_back(100000);
        }
    }
    
    void InOrder(TreeNode* root,vector<int>& ino){
         if(root!=NULL){
            InOrder(root->left,ino);
            ino.push_back(root->val);
            InOrder(root->right,ino);
        }else{
            ino.push_back(100000);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> prep,preq;
        vector<int> inop,inoq;
        
        preOrder(p,prep);
        preOrder(q,preq);
        
        InOrder(p,inop);
        InOrder(q,inoq);
        
        if(prep==preq && inop==inoq) return true;
        else return false;
    }
};