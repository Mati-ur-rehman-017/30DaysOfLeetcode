class Solution {
public:
    long long atMostK(vector<int>&nums,int k){
        int n=nums.size();
        int distinct=0;
        long long res=0;
        int back=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==0){
                distinct++;
            }
            mp[nums[i]]++;
            if(distinct>k){
                while(mp[nums[back]]-1!=0){
                    res+=i-back;
                    mp[nums[back++]]--;
                }
                res+=i-back;
                mp[nums[back++]]--;
                distinct--;
            }
        }
        while(back!=n){
            res+=n-back;
            mp[nums[back++]]--;
        }
        
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return atMostK(nums,k)-atMostK(nums,k-1);
    }
    
};