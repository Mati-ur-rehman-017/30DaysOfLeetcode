class Solution {
public:
    string s,keys;
    int solve(int i,int k,map<pair<int,int>,int>&memo,vector<vector<int>>&loc){
        if(k==keys.length()){
            return 0;
        }
        if(memo[{i,k}]){
            return memo[{i,k}];
        }
        int temp=INT_MAX;
        for(auto&x:loc[keys[k]-'a']){
            int diff1 = abs(i - x);
            int diff2 = s.length() - abs(i - x);
            int a = min(diff1, diff2);
            temp=min(temp,1+a+solve(x,k+1,memo,loc));
        }
        memo[{i,k}]=temp;
        return temp;
    }
    int findRotateSteps(string ring, string key) {
        vector<vector<int>>location(26);
        for(int i=0;i<ring.size();i++){
            location[ring[i]-'a'].push_back(i);
        }
        s=ring;
        keys=key;
        map<pair<int,int>,int>memo;
        return solve(0,0,memo,location);  
    }
};