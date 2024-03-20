bool compareInterval(const std::vector<int>& interval1, const std::vector<int>& interval2) {
    return interval1[0] < interval2[0];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>res;
        int n=intervals.size();
        if(n==0){return res;}
        int lastN=0;int last1=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=last1){
                if(intervals[i][1]>last1){
                    last1=intervals[i][1];
                }
            }else{
                res.push_back(vector<int>{intervals[lastN][0],last1});
                lastN=i;
                last1=intervals[i][1];
            }
        }
        res.push_back(vector<int>{intervals[lastN][0],last1});
        return res;   
    }
};