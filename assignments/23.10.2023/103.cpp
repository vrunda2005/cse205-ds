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
      void levelOrder(TreeNode* root,vector<vector<int>>& ans){    
        queue<TreeNode*> q;  
        q.push(root);
        int level=0;
        while(!q.empty()){
            int size=q.size();              //q size // 1 // 2 //
            vector<int> levelNode;
            // traverse through level of nodes in queue
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();  // 3 // 9 ,20
                q.pop();
                if(temp->left){             //9 //20 left 15
                    q.push(temp->left);
                }
                if(temp->right){   //20 right 7
                    q.push(temp->right);   //in queue 9 20 // 15 7 
                }
                
                levelNode.push_back(temp->val);   //level 1(3)  //level2(9 20)
               
            }
            level++;
            if(level%2==0){
                 reverse(levelNode.begin(),levelNode.end());
            }
            ans.push_back(levelNode);  
        }        
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        levelOrder(root,ans);
        
            
        
        return ans;
    }
};