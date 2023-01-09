class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        if(coins == 0 ) return 0;
        sort(costs.begin(), costs.end());
        int end = 0;
        int maxBars = 0;

        while(end < costs.size()){
            if(coins >= costs[end]){
                coins -= costs[end];
                maxBars = max(maxBars, end+1);
                end++;
            }
            else{
                return maxBars;
            }
        }
        return maxBars;
    }
};