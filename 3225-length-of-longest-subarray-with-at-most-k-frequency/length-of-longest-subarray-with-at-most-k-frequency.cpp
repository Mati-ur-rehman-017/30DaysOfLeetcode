class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
      int max=0;
      unordered_map<int,int>mp;
      int back=0;
      for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]+1==k+1){
            if(max<i-back){
                max=i-back;
            }
            while(nums[back]!=nums[i]){
                mp[nums[back]]--;
                back++;
            }
            back++;
        }else{
            mp[nums[i]]++;
        }
      }
      if(max<nums.size()-back){
        max=nums.size()-back;
    }
    return max;
    }
};