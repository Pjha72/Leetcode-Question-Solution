//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    unordered_map<char,int>map;
    int i =0,j=0,maxi=0;
    while(j < S.length()){
        //calculation
        map[S[j]]++;
        if(map.size()==j-i+1){
            maxi = max(maxi,j-i+1);
            j++;
        }
        else if(map.size() < j-i+1){
            while(map.size() < j-i+1){
                map[S[i]]--;
                if(map[S[i]]==0){
                    map.erase(S[i]);
                }
                i++;
            }
            j++;
        }
    }
    return maxi;
}