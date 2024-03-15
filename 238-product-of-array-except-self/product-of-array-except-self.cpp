class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res(nums.size());
        res[0]=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            res[i]=res[i-1]*nums[i-1];
        }
        int product=nums[n-1];
        for(int i=n-2;i>=0;i--){
            res[i]=res[i]*product;
            product*=nums[i];
        }
        return res;
    }
};