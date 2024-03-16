

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            // if(nums[i]==0){
            //     if(zero){
            //         continue;
            //     }
            //     zero++;
            // }
            if(i!=0&&nums[i]==nums[i-1]){
                continue;
            }
            int front=i+1;
            int back=nums.size()-1;
            while(front<back){
                if(nums[i]+nums[front]+nums[back]==0){
                    res.push_back(vector<int>({nums[back],nums[i],nums[front]}));
                    int tempIndex1 = front, tempIndex2 = back;
                    while(front < back&& nums[front] == nums[tempIndex1]) front++;
                    while(front < back && nums[back] == nums[tempIndex2]) back--;
                }else if(nums[front]+nums[back]+nums[i]>0){
                    back--;
                }else{
                    front++;
                }
            }
        }
        return res;
}
};