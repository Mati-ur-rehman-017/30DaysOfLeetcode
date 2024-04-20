class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
       vector<vector<int>>res;
       vector<int>cord(4);
       for(int i=0;i<land.size();i++){
        for(int j=0;j<land[0].size();j++){
            if(land[i][j]==1){
                cord[0]=i;cord[1]=j;
                cord[2]=i;cord[3]=j;
                check(land,cord,i,j);
                res.push_back(cord);
            }
        }
       } 
       return res;
    }
    void check(vector<vector<int>>&grid,vector<int>&cord,int i, int j){
       if(i<0||j<0||i>=grid.size()||j>=grid[0].size()){
            return;
        }
        if(grid[i][j]==0||grid[i][j]==-1){
            return;
        }
        grid[i][j]=-1;
        cord[2]=max(cord[2],i);
        cord[3]=max(cord[3],j);
        check(grid,cord,i+1,j);
        check(grid,cord,i,j+1); 
    }
};