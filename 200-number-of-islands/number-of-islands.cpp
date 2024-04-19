class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(check(grid,i,j)){
                    res++;
                }
            }
        }
        return res;
    }
    bool check(vector<vector<char>>&grid,int i,int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()){
            return false;
        }
        if(grid[i][j]=='0'||grid[i][j]=='#'){
            return false;
        }
        grid[i][j]='#';
        check(grid,i+1,j);
        check(grid,i,j+1);
        check(grid,i-1,j);
        check(grid,i,j-1);
        return true;
    }
};