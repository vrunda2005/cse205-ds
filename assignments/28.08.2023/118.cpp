class Solution {
public:
    vector<int> generateRow(int row){ //call each row 
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(1); // always push 1  
        for(int col=1;col<row;col++){
            // 1 5 10 10 5 1  for example 
            ans=ans*(row-col);      //1*(6 th row-1 col )=5 // 2 nd loop (5/1)*(6th row-2nd col)=(5/1)*(4)
            ans=ans/col;          // 5/1 then itereate thorugh loop=5  //2nd  loop (5*4)/2=10
            ansRow.push_back(ans);
        }
        return  ansRow;
        
    }
    
    vector<vector<int>> generate(int numRows) {
        
       vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));  // for each row 
        }
        return ans;
        // time complexity big O of n^2
    }
};