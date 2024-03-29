class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long res=0;
        long long max=*max_element(nums.begin(),nums.end());
        long long count=0;
        long long back=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==max){
                count++;
                if(count==k){
                    while(nums[back]!=max){
                        res+=n-i;
                        back++;
                    }
                    back++;
                    res+=n-i;
                    count--;
                }
            }
        }
        return res;
    }
};