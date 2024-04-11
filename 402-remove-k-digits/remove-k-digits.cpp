class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()<=k){
            return "0";
        }
        stack<char>s;
        for(auto& i:num){
            if(!s.empty()){
                while(k>0&&!s.empty()&&s.top()>i){
                    k--;
                    s.pop();
                }
            }
            s.push(i);
        }
        num.clear();
        while(k>0){
            k--;
            s.pop();
        }
        while(!s.empty()){
            num+=s.top();s.pop();
        }
        reverse(num.begin(),num.end());
        while(num.length()>=1&&num[0]=='0'){
            num.erase(0,1);
        }
        if(num.length()==0){
            return "0";
        }else{
            return num;
        }
    }
};