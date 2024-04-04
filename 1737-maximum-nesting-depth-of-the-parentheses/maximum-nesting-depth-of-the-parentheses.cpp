class Solution {
public:
    int maxDepth(string s) {
      int st=0;
      int d=0;
      for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st++;
            if(st>d){
                d=st;
            }
        }else if(s[i]==')'){
            st--;
        }
      }
      return d;  
    }
};