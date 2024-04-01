class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()==2){
            if(s[0]==s[1]){
                return s;
            }
        }
        string res;
        int no=0,max=1;
        int low,high;
        int n=s.length();
        int count=0;
        for(int i=1;i<n-1;i++){
            if(s[i]==s[i+1]&&count==0){
                low=i;
                high=i+1;
                count++;
            }else if(s[i+1]==s[i-1]){
                low=i-1;
                high=i+1;
                count=0;
            }else if(s[i]==s[i-1]){
                low=i-1;
                high=i;
            }else{
                continue;
            }
            while(low>=0&&high<=n-1&&s[low]==s[high]){
                low--;
                high++;
            }
            if(high-low-1>max){
                no=i;
                max=high-low-1;
            }
            if(count&&s[i+1]==s[i-1]){
                i--;
            }else{
                count=0;
            }
        }
        if(max%2==0){
            if(s[no]==s[no+1]){
                return s.substr(no-max/2+1,max);
            }
        }
        return s.substr(no-max/2,max);
    }
};