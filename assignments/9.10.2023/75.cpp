class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
     int L=0;
    int M=0;
    int H=n-1;
        while(M<=H){
            int x=nums[M];
            if(x==0){
                swap(nums[L],nums[M]);
                L++;
                M++;
            }
            else  if(x==2){
                swap(nums[M],nums[H]);              
                H--;
            }
            else if(x==1){
                M++;
            }
            
        }
       
        
    }
};