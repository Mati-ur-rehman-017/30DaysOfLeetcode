class Solution {
public:
    int pivotInteger(int n) {
       long int sum=0,sum2=0;
       for (int i=1;i<=n;i++){
        sum+=i;
       }
        for(int i=n;i>=n/2;i--){
            sum2+=i;
            if(sum==sum2){
                return i;
            }else{
                sum-=i;
            }
        }
        return -1;
    }
};