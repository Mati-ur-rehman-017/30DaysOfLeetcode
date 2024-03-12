class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        if(size==0||size==1){return 0;}
        int max_profit=0;
        int lowest=prices[0];
        for(int i=0;i<size;i++){
            if(prices[i]<lowest){lowest=prices[i];}
            if((prices[i]-lowest)>max_profit){max_profit=prices[i]-lowest;}
        }
        return max_profit;
    }
};