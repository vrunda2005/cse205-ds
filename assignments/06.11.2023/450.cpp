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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root!=NULL){
              if(key > root->val){
            root->right=deleteNode(root->right,key);
        }
        else if(key < root->val){
            root->left=deleteNode(root->left,key);
        }
        else{
            if(root->left==NULL && root->right==NULL){
                    return NULL;
            }
            else if(root->left==NULL || root->right==NULL){
                if(root->left==NULL){
                    return root->right;                    
                }else if(root->right==NULL){
                    return root->left;
                }
            }
            else{
                TreeNode* temp=root->right;  //Inorder Suceesor 
                while(temp->left!=NULL)   // In that smallest element 
                     temp=temp->left;  
                root->val=temp->val;   // smallest swapp 
                root->right=deleteNode(root->right,temp->val);  // delete temp because we swapped it                 
                }            
             }
        }
      
     
        return root;
    }
};