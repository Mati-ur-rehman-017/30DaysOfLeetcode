class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        if(s.length()==1){
            return 1;
        }
        int res=0,front=0,back=0,num=0;bool check=false;
        for(;front<s.size();front++){
            num=back;
            for(;num<front;num++){
                if(s[num]==s[front]){
                    if(front-back>res){
                        res=front-back;
                    }
                    back=num+1;
                    break;
                }
            }
        }
        if(front-back>res){
            res=front-back;
        } 
        return res;
    }
};