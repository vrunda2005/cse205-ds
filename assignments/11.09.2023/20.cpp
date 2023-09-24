class Solution {
public:
    

bool isValid(string s){
        stack<char> st;
        int  n=s.size();
        for(int i=0;i<n;i++){           
               if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                   char c=s[i];
                   st.push(c);
               }
               else{
                    if(st.empty()){
                        return false;
                    } 
                    char c=st.top();
                    // st.pop();
                    if((s[i]==')' && c=='(') || (s[i]=='}' && c=='{')||(s[i]==']' &&                           c=='['))
                    {st.pop();
                        
                    }
                    else{
                        return false;
                    }
                }
        }
        if(st.empty()){
            return true;
        } 
        return false;
    }
}; 