class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
       int sum=0;
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            sum--;
            nums[i]=sum;
        }else{
            sum++;
            nums[i]=sum;
        }
        mp[nums[i]]=i;
       }
       int longest=0;
    for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]-i>longest){
            longest=mp[nums[i]]-i;
        }
    }
    if(longest==0 && mp[0]!=0){
        return mp[0]+1;
    }
    if(longest!=0&&mp[0]+1>longest){
        longest=mp[0]+1;
    }
    return longest;
    }
};