class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int32_t res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int32_t product=nums[i];
            if(product>res){
                res=product;
            } 
            for(int j=i+1;j<nums.size();j++){
                product*=nums[j];
                if(product>res){
                    res=product;
                }
            }
        }
        return res;
    }
};