class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> odd;
        priority_queue<int> even;
        string s=to_string(num);
        int n=s.size();
        for(int i=0;i<n;i++){
            // int digit= int(s[i]);
            int digit= s[i]-'0';  //ascii value of(number s[i])-ascii value of(0)=number ascii value-48 
           
            
            if(digit%2==0){//even
                even.push(digit);
            }else{
                odd.push(digit);
            }
        }
         int ans=0;
         for(int i=0;i<n;i++){
             ans=ans*10;
             
             if((s[i]-'0')%2==0){
                
                 ans+=even.top();
                 even.pop();
             }else{
                 ans+=odd.top();
                 odd.pop();                 
             }              
         }

        return ans;
       
    }
};