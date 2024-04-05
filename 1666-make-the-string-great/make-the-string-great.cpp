class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(auto&i:s){
            if(!st.empty()){
                if(abs(i-st.top())==32){
                    st.pop();
                }else{
                    st.push(i);
                }
            }else{
                st.push(i);
            }
        }
        string res;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};