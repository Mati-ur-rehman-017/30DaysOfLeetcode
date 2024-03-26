class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0||nums[i]==i+1){continue;}
            else if(nums[i]>n||nums[nums[i]-1]==nums[i]){
                nums[i]=-1;
            }
            else{
                swap(nums[nums[i]-1],nums[i]);
                i--;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};