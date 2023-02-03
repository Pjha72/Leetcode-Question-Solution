//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void solve(string s, string path, vector<string> &ans){
	        //base case
	        if(s.size()==0){
	            ans.push_back(path);
	            return;
	        }
	        for(int i=0;i<s.size();i++){
	            char ch = s[i];
	            string left = s.substr(0,i);
	            string right = s.substr(i+1);
	            solve(left+right,path+ch,ans);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    solve(S,"",ans);
		    set<string> s;
		    for(auto i: ans){
		        s.insert(i);
		    }
		    ans.clear();
		    set<string>::iterator it;
		    for(it=s.begin();it!=s.end();it++){
		        ans.push_back(*it);
		    }
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends