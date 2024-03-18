class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int arrows=0;
        int low=points[0][0],high=points[0][1];
        for(int i=0;i<points.size();i++){
            if(points[i][0]<=high){
                if(points[i][1]<=high){
                    low=points[i][0];
                    high=points[i][1];
                }else{
                    low=points[i][0];
                }
            }else{
                arrows++;
                low=points[i][0];
                high=points[i][1];
            }
        }
        return arrows+1;
    }
};