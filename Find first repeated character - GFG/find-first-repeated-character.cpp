//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    unordered_map<char, int> m;
    for(auto i : s){
        m[i]++;
        if(m[i]==2){
            string ans = "";
            ans+=i;
            return ans;
        }
        ++i;
    }
    return "-1";
}