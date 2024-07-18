class Solution {
public:

    int solve(int ind,int buy,vector<int> &prices,int n,vector<vector<int>> &dp){
        if(ind==n)
        return 0;

        if(dp[ind][buy]!=-1)
        return dp[ind][buy];

        if(buy){
            return dp[ind][buy] = max(-prices[ind]+solve(ind+1,0,prices,n,dp),solve(ind+1,1,prices,n,dp));
        }
        return dp[ind][buy] = max(prices[ind]+solve(ind+1,1,prices,n,dp),solve(ind+1,0,prices,n,dp));
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,1,prices,n,dp);
    }
};