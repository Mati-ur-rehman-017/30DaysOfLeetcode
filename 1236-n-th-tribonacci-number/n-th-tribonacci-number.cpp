class Solution {
public:
    int tribonacci(int n) {
        if(n==0){
            return 0;
        }
       int a=0,b=1,c=1;
        if(n==1||n==2){return 1;}
        int temp=0;
        for(int i=0;i<n-2;i++){
            temp=a+b+c;
            a=b;
            b=c;
            c=temp;
        }
        return c;
    }
};