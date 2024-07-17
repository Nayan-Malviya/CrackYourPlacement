class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0], maxi = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]-mini>0){
                maxi = max(maxi,prices[i]-mini);
            }
            if(mini>prices[i]){
                mini = prices[i];
            }
        }
        return maxi;
    }
};