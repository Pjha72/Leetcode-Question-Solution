//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int hashString(string S) {
        unordered_map<char,int> m;
        string X = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        
        for(int i=0;i<X.length();i++){
            m[X[i]] = i;
        }
        
        int count=0,k=0;
        int sum=0;
        for(int i=0;i<S.length();i++){
            if(S[i]==' '){
                k=0;
                count++;
            }
            else{
                sum+=(k+m[S[i]]);
                k++;
            }
        }
        count++;
        return (count*sum);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.hashString(s) << endl;
    }
    return 0;
}
// } Driver Code Ends