class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        int n=operations.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            // int val=operations[i];
            if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                int c=st.top();
                int k=2*c;
                st.push(k);
            }else if(operations[i]=="+"){
                int p1=st.top();
                st.pop();
                int p2=st.top();
                int p=p1+p2;
                st.push(p1);
                st.push(p);
            }else{
                int val=stoi(operations[i]);
                st.push(val);
            }
            
        }
        while(!st.empty()){
            int s=st.top();
            sum+=s;;
            st.pop();
        }
        
        
        return sum;
        
    }
};