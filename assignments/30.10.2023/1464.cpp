class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        priority_queue<int> p;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();;
            return (a-1)*(b-1);
            
             
    }
};