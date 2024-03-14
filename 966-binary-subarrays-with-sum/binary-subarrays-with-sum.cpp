class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0,count=0;
        for (int i=0;i<nums.size();i++){
            sum=nums[i];
            if(sum==goal){
                count++;
            }
            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
                if(sum==goal){
                    count++;
                }
            }
        }
        return count;
    }
};