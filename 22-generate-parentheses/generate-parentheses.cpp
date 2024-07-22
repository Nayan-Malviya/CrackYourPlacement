class Solution {
public:

    void solve(int &n,vector<string> &ans,string &temp,int open,int close){
        if(temp.size()==2*n){
            ans.push_back(temp);
            return;
        }

        if(open==close){
            temp.push_back('(');
            solve(n,ans,temp,open-1,close);
            temp.pop_back();
        }

        else{
            temp.push_back(')');
            solve(n,ans,temp,open,close-1);
            temp.pop_back();
            if(open>0){
                temp.push_back('(');
                solve(n,ans,temp,open-1,close);
                temp.pop_back();
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        int open=n,close=n;
        solve(n,ans,temp,open,close);
        return ans;
    }
};