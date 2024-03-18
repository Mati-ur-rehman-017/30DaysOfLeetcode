class Solution {
public:
    int getSum(int a, int b) {
        int s=a^b;
        int c=a&b;
        while(c!=0){
            int carry=c<<1;
            c=s&carry;
            s=s^(carry);
        }
        return s;
    }
};