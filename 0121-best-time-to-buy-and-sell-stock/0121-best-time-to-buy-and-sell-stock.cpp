class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
        int res = 0, buy = 0, sell = 1;
        for(sell; sell < prices.size(); sell++){
            if(prices[sell]-prices[buy] > res) res = prices[sell]-prices[buy];
            if(prices[sell] < prices[buy]) buy = sell;
        }
        return res;
    }
};


// if(prices[sell]-prices[buy] > res) res = prices[sell]-prices[buy];