class Solution {
public:
    int missingNumber(vector<int>& nums) {
       long int sum=0,sum2=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            sum2+=i+1;
        }
        return sum2-sum;
    }
};