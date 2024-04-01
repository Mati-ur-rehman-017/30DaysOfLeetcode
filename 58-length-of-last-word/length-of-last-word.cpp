class Solution {
public:
    int lengthOfLastWord(string s) {
       int res=0;
       bool zero=false;
       for(auto&a:s){
        if(a==' '){
            zero=true;
        }else {
            if(zero){
                res=1;
                zero=false;
            }else{
                res++;
            }
        }
       } 
       return res;
    }
};