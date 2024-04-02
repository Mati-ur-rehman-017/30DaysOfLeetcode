class Solution {
public:
    bool isIsomorphic(string s, string t) {
      unordered_map<char,char>mp;
      for(int i=0;i<s.length();i++){
        if(!mp[s[i]]){
            mp[s[i]]=t[i];
        }else if(mp[s[i]]!=t[i]){
            return false;
        }
      }
      vector<int>check(127,true);
      for(auto& i:mp){
        if(check[i.second]){
            check[i.second]=false;
        }else{
            return false;
        }
      }
      return true;  
    }
};