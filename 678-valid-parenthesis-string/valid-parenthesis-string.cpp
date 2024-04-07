// class Solution {
// public:
//     bool checkValidString(string s) {
//         stack<char>st;
//         int count=0;
//         for(auto& i:s){
//             if(i=='*'){
//                 count++;
//             }else if(i=='('){
//                 st.push(i);
//             }else{
//                 if(!st.empty()){
//                     st.pop();
//                 }else if(count>0){
//                     count--;
//                 }else{
//                     return false;
//                 }
//             }
//         }
//         cout<<st.size();
//         return st.empty();
//     }
// };
class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0, leftMax = 0;

        for (char c : s) {
            if (c == '(') {
                leftMin++;
                leftMax++;
            } else if (c == ')') {
                leftMin--;
                leftMax--;
            } else {
                leftMin--;
                leftMax++;
            }
            if (leftMax < 0) return false;
            if (leftMin < 0) leftMin = 0;
        }
        
        return leftMin == 0;
    }
};