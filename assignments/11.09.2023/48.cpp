class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // vector<vector<int>> st(matrix[0].size(),vector<int> (matrix.size()));
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){ //transpose of matrix 
                swap(matrix[j][i],matrix[i][j]);
            }
        
        }
        for(int i=0;i<n;i++){   //transpose revrse will be rotate 
            reverse(matrix[i].begin(),matrix[i].end());
        }
      
    }
};