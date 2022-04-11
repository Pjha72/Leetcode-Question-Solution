class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n=  grid[0].size();
        vector<int> ans;
        int mod  = m*n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans.push_back(grid[i][j]);
            }
        }
        k=k%mod;
        if(k==0){
            return grid;
        }
        int index = mod-k;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=ans[index];
                index = (index+1)%mod;
            }
        }
        return grid;
    }
};