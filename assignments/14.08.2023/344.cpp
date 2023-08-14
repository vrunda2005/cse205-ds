class Solution {
public:
     void Reverse(vector<char>& s,int i){
     if(i>=s.size()/2){
         return;
     }
     swap(s[i],s[s.size()-i-1]);
     Reverse(s,i+1);
       
    }
    void reverseString(vector<char>& s) {
        Reverse(s,0);    
    }
};