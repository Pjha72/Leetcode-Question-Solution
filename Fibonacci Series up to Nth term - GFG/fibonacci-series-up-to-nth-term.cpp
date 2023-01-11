//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> Series(int N,vector<long long>&ans){
        if(N==0 || N==1){
            return ans;
        }
        Series(N-1,ans);
        ans.push_back(ans[N-1] + ans[N-2]);
        return ans;
    }
    vector<long long> Series(int N) {
        vector<long long> ans;
        int a = 0,b=1;
        ans.push_back(a);
        ans.push_back(b);
        
        ans = Series(N,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends