#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        char b;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' ||s[i]=='{' ||s[i]=='['){
                a.push(s[i]);
            }else {
                if(a.empty()){
                    return false;
                }
                b=a.top();
                a.pop();
                if(s[i]==')' && b!='('){
                    return false;
                }
                if(s[i]=='}' && b!='{'){
                    return false;
                }
                if(s[i]==']' && b!='['){
                    return false;
                }
            }
        }
        if(a.empty()){
        return true;
        }else return false;
    }
};