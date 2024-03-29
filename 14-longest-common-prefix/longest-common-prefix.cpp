class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        for(int i=1;i<strs.size();i++){
            for(int j=0;j<res.length();j++){
                if(strs[i][j]!=res[j]){
                    int n=res.length();
                    for(int k=0;k<n-j;k++){
                        res.pop_back();
                    }
                    break;
                }
            }
        }return res;
    }
};