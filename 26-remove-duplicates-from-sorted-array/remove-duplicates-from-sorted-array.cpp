class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
       int back=1,count=0;
       int front=1;
       for(int i=1;i<nums.size();i++){
           if(nums[front]!=nums[front-1]){
               nums[back++]=nums[front];
           }
           front++;
       } 
       return back;
    }
};