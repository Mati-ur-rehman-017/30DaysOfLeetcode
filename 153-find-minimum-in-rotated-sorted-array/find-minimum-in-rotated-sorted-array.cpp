class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mid,low=0,high=n-1;;
        while(low<high){
            if(nums[low]<nums[high]){
                return nums[low];
            }
            mid=(low+high)/2;
            if(nums[mid]>nums[high]){
                low=mid+1;
            }else {
                high=mid;
            }
        }
        return nums[low];
    }
};