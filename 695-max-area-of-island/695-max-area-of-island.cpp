class Solution {
    
public:
    int r=0;
    int c=0;
    int ans=0;
    int a;
    void func(int i, int j, vector<vector<int>>& grid ){
        if(i>=r||j>=c||i<0||j<0||grid[i][j]!=1)
            return ;
        
        if(grid[i][j]==1){
            a++;
            grid[i][j]=0;
            func(i+1,j,grid);
            func(i-1,j,grid);
            func(i,j+1,grid);
            func(i,j-1,grid);
        }   
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        r = grid.size();
        c = grid[0].size();

        for(int i =0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    a=1;
                    grid[i][j]=0;
                    func(i+1,j,grid);
                    func(i-1,j,grid);
                    func(i,j+1,grid);
                    func(i,j-1,grid);
                    ans = max(ans,a);
                    
                }
            }
        }
        
        return ans;
    }
    
};