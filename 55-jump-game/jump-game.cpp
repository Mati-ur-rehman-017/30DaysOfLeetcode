class Solution {
public:
    bool canJump(vector<int>& nums) {
       int jump=nums[0];
       if(nums.size()==1){
        return true;
       }
       if(jump==0){return false;}
        for(int i=1;i<nums.size();i++){
            if(nums[i]>jump-1){
                jump=nums[i];
            }else{
                jump--;
                if(jump==0&&i!=nums.size()-1){
                    return false;
                }
            }
        }
        return true;
    }
};