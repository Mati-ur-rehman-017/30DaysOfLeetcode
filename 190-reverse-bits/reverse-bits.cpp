class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string a;
        while(n>0){
            a.append(to_string(n%2));
            n=n/2;
        }
        while(a.size()<32){
            a.push_back('0');
        }
        uint32_t res=0;
        uint32_t amount=1;
        for(int i=31;i>=0;i--){
            res+=(a[i]-48)*amount;
            amount*=2;
        }
        return res;
    }
};