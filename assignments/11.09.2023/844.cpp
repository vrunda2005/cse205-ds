#include <string.h>
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        string str1,str2;
        
        for(int i=0;i<s.size();i++){
            char c='#';
            if(s[i]!=c){
                s1.push(s[i]);
            }
            else if(s[i]==c && !s1.empty()){
                s1.pop();
            }
        }
        for(int i=0;i<t.size();i++){
             char c='#';
            if(t[i]!='#'){
                s2.push(t[i]);
            }
            else if(t[i]=='#' && !s2.empty()){
                s2.pop();
            }
        }
        if(s1.empty() && s2.empty()) return true;
        while(!s1.empty()){
            str1.push_back(s1.top());
            s1.pop();
        }
         while(!s2.empty()){
            str2.push_back(s2.top());
            s2.pop();
        }
        return str1==str2;
         
    }
};