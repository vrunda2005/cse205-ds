class Solution {
public:
    
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            temp.push_back(i);
            
        }
        for(int i=0;i<n;i++){
            if(temp[i]!=nums[i]){
                return i;
            }
        }
        return n;
    }
};