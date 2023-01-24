//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthStair(int n){
		    if(n<2) return 1;
		    int a = 1,b=1,c=0;
		    for(int i=2;i<=n;i++){
		        c = a+1;
		        a = b;
		        b = c;
		    }
		    return c;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends