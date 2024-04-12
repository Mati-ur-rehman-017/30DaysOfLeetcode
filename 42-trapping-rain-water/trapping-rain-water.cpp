class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0,max=0,num;
        stack<int>a;
        for(int i=0;i<height.size();i++){
            if(a.empty()){a.push(height[i]);max=height[i];continue;}
            if(height[i]>=max){
                while(!a.empty()){
                    num=a.top();
                    a.pop();
                    sum= sum+max-num;
                }
                a.push(height[i]);max=height[i];continue;
            }
            if(height[i]<max){a.push(height[i]);continue;}
        }
        if(a.empty()){
            return sum;
        }
        else{
            num=a.top();
            a.pop();max=num;
            while(!a.empty()){
                    num=a.top();
                    a.pop();
                    if(num>=max){
                        max=num;
                    }else{
                        sum=sum+max-num;
                    }
                }
        }return sum;
    }
};