class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> ans = board;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int one=0;
                if(i-1>=0 && j-1>=0)one+=ans[i-1][j-1];
                if(i-1>=0)one+=ans[i-1][j];
                if(i-1>=0 && j+1<n)one+=ans[i-1][j+1];
                if(j-1>=0)one+=ans[i][j-1];
                if(j+1<n)one+=ans[i][j+1];
                if(i+1<m && j-1>=0)one+=ans[i+1][j-1];
                if(i+1<m)one+=ans[i+1][j];
                if(i+1<m && j+1<n)one+=ans[i+1][j+1];
                if(ans[i][j]==0 && one==3)
                board[i][j] = 1;
                else if(ans[i][j]==1){
                  if(one<2 || one>3){
                      board[i][j] = 0;
                  }  
                }
            }
        }
    }
};