class Solution {
public:
    int lcs(string word1, string word2,int n, int m){
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));

	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			if(i==0 || j==0){
				dp[i][j] = 0;
				continue;
			}
			if(word1[i-1]==word2[j-1]){
				dp[i][j] = 1+dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
    return dp[n][m];
    }
    
    int minDistance(string word1, string word2) {
        	int n=word1.size(),m=word2.size();
        return n+m-2*lcs(word1,word2,n,m) ;

	
    }
};