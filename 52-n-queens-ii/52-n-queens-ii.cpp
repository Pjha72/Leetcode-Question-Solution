class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<int>> chessboard(n,vector<int>(n));
        return solve(n,chessboard,0);
    }
    bool isSafe(vector<vector<int>>&chessboard, int x, int y, int n){
        for(int row=0;row<x;row++){
            if(chessboard[row][y]==1){
                return false;
            }
        }
        
        int row=x,col=y;
        while(row>=0 && col>=0){
            if(chessboard[row][col]==1){
                return false;
            }
            row--,col--;
        }
        row=x,col=y;
        while(row>=0 && col<n){
            if(chessboard[row][col]==1){
                return false;
            }
            row--,col++;
        }
        return true;
    }
    int solve(int n, vector<vector<int>>& chessboard,int x){
        if(x==n){
            return 1;
        }
        int sum=0;
        for(int col=0;col<n;col++){
            if(isSafe(chessboard,x,col,n)){
                chessboard[x][col]=1;
                sum+=solve(n,chessboard,x+1);
                chessboard[x][col]=0;
            }
        }
        return sum;
    }
};