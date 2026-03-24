class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minimum=prices[0];
        int maxprofit=0;
        int cost;

        for(int i=1;i<prices.size();i++){
            cost=prices[i]-minimum;
            maxprofit=max(maxprofit,cost);
            minimum=min(minimum,prices[i]);
        }

        return maxprofit;
        
    }
};