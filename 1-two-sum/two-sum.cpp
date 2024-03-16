class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mp;
       vector<int>res;
       for(int i=0;i<nums.size();i++){
        if(mp[target-nums[i]]==0){
            mp[nums[i]]=i+1;
        }else{
            res.push_back(mp[target-nums[i]]-1);
            res.push_back(i);
            return res;
        }
       }
       return res;
    }
};