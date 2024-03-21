class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end());
       int count=0;
        int prev=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>=intervals[prev][1]){
                prev=i;
            }else if(intervals[i][1]>intervals[prev][1]){
                count++;
            }else{
                prev=i;
                count++;
            }
        }
        return count;
    }
};