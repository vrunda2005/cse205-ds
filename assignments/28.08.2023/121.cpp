class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int profit=0;
        int cost;
        
        for(int i=0;i<prices.size();i++){
            
            cost=prices[i]-minimum;
            profit=max(profit,cost);
            minimum=min(minimum,prices[i]);
            
        }
        
        return profit;
        
    }
};