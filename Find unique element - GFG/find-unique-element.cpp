//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findUnique(int a[], int n, int k) {
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        for(auto i :m){
            if(i.second%k!=0){
                return i.first;
            }
        }
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution obj;
        cout << obj.findUnique(a, n, k) << endl;
    }
}
// } Driver Code Ends