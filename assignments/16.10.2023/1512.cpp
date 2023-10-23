class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      int total=0;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            total+=umap[nums[i]];  //1  //1+2  //3+3=6  how many times preiveous we have see element frequency before 
            umap[nums[i]]++;       //2   3    //4
        }

        return total;
    }
};