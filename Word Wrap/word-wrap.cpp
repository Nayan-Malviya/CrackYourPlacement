//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    
    int solve(int ind,vector<int> &nums,int k,int curr,vector<vector<int>> &dp){
        if(ind==nums.size())
        return 0;
        
        if(dp[ind][curr]!=-1)
        return dp[ind][curr];
        
        int newSpaces = curr+1+nums[ind];
        int take = INT_MAX;
        if(newSpaces<=k){
                take = solve(ind+1,nums,k,newSpaces,dp);
        }
        int notTake = solve(ind+1,nums,k,nums[ind],dp) + ((k-curr) *(k-curr));
        
        return dp[ind][curr] = min(take,notTake);
    }

    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        vector<vector<int>> dp(nums.size(),vector<int> (k+1,-1));    
       return solve(1,nums,k,nums[0],dp);
    } 
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}
// } Driver Code Ends