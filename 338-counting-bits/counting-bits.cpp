class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);
        res[0]=0;
        int max=0;int low=0;
        for(int i=1;i<res.size();i++){
            res[i]=res[low++]+1;
            if(res[i]>max){
                max=res[i];
                low=0;
            }
        }
        return res;
    }
};