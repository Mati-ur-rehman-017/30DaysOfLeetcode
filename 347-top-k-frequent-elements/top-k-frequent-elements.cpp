class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       for(auto& i:nums){
        mp[i]++;
       }
        vector<pair<int, int> > pairs; 
        for (auto& it : mp) { 
            pairs.push_back(it); 
        }
        sort(pairs.begin(),pairs.end(),[](auto&a,auto&b){
            return a.second>b.second;
        });
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(pairs[i].first);
        }
        return res;
    }
};