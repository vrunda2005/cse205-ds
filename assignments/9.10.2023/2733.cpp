class Solution {
public:
     void merge(vector<int>& v, int start, int end)
{
    int mid = (start + end) / 2;
    int i =  start ;
    int j = mid+1;
   vector<int> temp;
   while(i<=mid && j<=end ){
       if(v[i]<=v[j]){
           temp.push_back(v[i]);
           ++i;
       }else{
           temp.push_back(v[j]);
           ++j;
       }
    }
     while(i<=mid){
         temp.push_back(v[i]);
         ++i;
     }     
     while(j<=end){
         temp.push_back(v[j]);
         j++;
     }    
     for(int i=start;i<=end;i++){
         v[i]=temp[i-start];
     }
}
    
void mergeSort(vector<int>& a, int start, int end)
    {
    int s = start, e = end;
    if (start < end)
    {
        int mid = (s + e) / 2;
        mergeSort(a, s, mid);
        mergeSort(a, mid + 1, e);
        merge(a, s, e);
    }    
}
    int findNonMinOrMax(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        if(nums.size()==2 || nums.size()==1){
            return -1;
        }
        return nums[1];
        
    }
};