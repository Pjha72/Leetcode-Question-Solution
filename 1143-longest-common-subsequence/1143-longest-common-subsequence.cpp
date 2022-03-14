class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size(),m=text2.size();
        int mat[n+1][m+1];
	    for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0){
                    mat[i][j]=0;
                }
                else if(text1[i-1]==text2[j-1]){
                    mat[i][j]=1+mat[i-1][j-1];
                }
                else{
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
	return mat[n][m] ;
    }
};