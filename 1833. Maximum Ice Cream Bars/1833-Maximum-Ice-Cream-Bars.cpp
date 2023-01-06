class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        if(coins == 0 ) return 0;
        sort(costs.begin(), costs.end());
        int start = 0, end = 0, spentCoins = 0;
        int maxBars = 0;
        while(end < costs.size()){
            // cout << "Now at bar  " << costs[end] << "   And the boy have " << coins << endl;
            // cout << "maxBars =  " << maxBars << endl;
            // cout << "Boy have so far " << end-start+1 << endl << endl <<endl;
            //if the boy still have coins, and can buy the next bar
            if(coins >= costs[end]){
                coins -= costs[end];
                maxBars = max(maxBars, end-start+1);
                end++;
            }
            else{
                while(coins < costs[end]){
                    coins += costs[start];
                    start++;
                    //cout << "Moving to " << costs[start] << "    , now he have " << coins << endl;
                }
            }
        }
        return maxBars;
    }
};
