class Solution {
public:
    bool wordPattern(string pattern, string s) {
       
        vector<string> str;
        int i=0;
        string temp="";
        while(i<s.size()){
            if(s[i]==' '){
                str.push_back(temp);
                temp="";
            }else{
                temp+=s[i];
            }
            i++;
        }
       str.push_back(temp); //last word 
        
        unordered_map<char,string> mp;
        set<string> st;
        //check if s size is same with the  pattern size 
        if(pattern.size()!=str.size()){
            return false;
        }
        
        for(int i=0;i<pattern.size();i++){
            if(mp.find(pattern[i]) != mp.end()){
                if(mp[pattern[i]] != str[i]){
                    return false;
                }
            }else{
                if(st.count(v[i])>0){
                    return false; //aready preset 
                }
                mp[pattern[i]]=str[i];
                st.insert(str[i]);
            }
        }
        return true;
        
    }
};