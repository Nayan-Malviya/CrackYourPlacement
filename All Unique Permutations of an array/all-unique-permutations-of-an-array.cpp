//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  void solve(int ind,vector<int> &arr,set<vector<int>> &st){
      if(ind==arr.size()){
          st.insert(arr);
            return;
      }
      
      for(int i=ind;i<arr.size();i++){
          swap(arr[ind],arr[i]);
          solve(ind+1,arr,st);
          swap(arr[ind],arr[i]);
      }
  }
  
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        set<vector<int>> st;
        sort(arr.begin(),arr.end());
        
        solve(0,arr,st);
        vector<vector<int>> ans;
        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends