class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> chessboard(n,string(n,'.'));
        solve(chessboard,0,n);
        return ans;
    }
    bool isSafe(vector<string>&chessboard,int x,int y, int n){
        for(int row=0;row<x;row++){
            if(chessboard[row][y]=='Q'){
                return false;
            }
        }
        // left diagonal
        int row=x,col=y;
        while(row>=0 && col>=0){
            if(chessboard[row][col]=='Q'){
                return false;
            }
            row--,col--;
        }
        // Right diagonal
        row=x,col=y;
        while(row>=0 && col<n){
            if(chessboard[row][col]=='Q'){
                return false;
            }
            row--,col++;
        }
        return true;
    }
    
    void solve(vector<string>&chessboard, int x, int n){
        if(x==n){
            ans.push_back(chessboard);
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(chessboard,x,col,n)){
                chessboard[x][col]='Q';
                solve(chessboard,x+1,n);
               chessboard[x][col]='.';
            }
        }
    }
};