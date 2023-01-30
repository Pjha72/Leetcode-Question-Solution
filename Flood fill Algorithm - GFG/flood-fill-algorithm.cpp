//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int  PrevColor, NewColor, n , m;
    void FloodFillVersion2(int sr, int sc, vector<vector<int>>& image){
        if(sr>=0 && sc>=0 && sr<n && sc<m){
            if(image[sr][sc] == PrevColor){
                image[sr][sc] = NewColor;
                //Top
                FloodFillVersion2(sr+1,sc,image);
                //down
                FloodFillVersion2(sr-1,sc,image);
                //left
                FloodFillVersion2(sr,sc-1,image);
                //right
                FloodFillVersion2(sr,sc+1,image);
            }
            else{
                return;
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        PrevColor = image[sr][sc];
        NewColor = newColor;
        
        if(NewColor == PrevColor){
            return image;
        }
        n = image.size();
        m = image[0].size();
        FloodFillVersion2(sr,sc,image);
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends