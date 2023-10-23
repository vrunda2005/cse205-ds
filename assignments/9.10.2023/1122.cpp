class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
         map<int,int> mp;        
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        vector<int> ans,remain;
        for(int i=0;i<arr2.size();i++){
             for(int j=0;j<mp[arr2[i]];j++){  //mp[arr] value till loop 
                ans.push_back(arr2[i]);
         }
            mp.erase(arr2[i]);  pop so that we get to know about remain ele in mp 
        }       
        
       for(auto r:mp){  
           for(int i=0;i<r.second;i++){
               remain.push_back(r.first);
           }
       }
        sort(remain.begin(),remain.end());
        ans.insert(ans.end(),remain.begin(),remain.end());        
        return ans;
                
    }
};
