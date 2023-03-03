//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int firstOccurence(vector<long long>& arr, int n, int key){
    int s=0,e=n-1;
    int m = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[m]==key){
            ans = m;
            e = m - 1;
        }
        else if(arr[m] > key){
            e = m-1;
        }
        else{
            s = m+1;
        }
        m = s+(e-s)/2;
    }
    return ans;
}

int lastOccurence(vector<long long>& arr, int n, int key){
    int s=0,e=n-1;
    int m = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[m]==key){
            ans = m;
            s = m + 1;
        }
        else if(arr[m] > key){
            e = m-1;
        }
        else{
            s = m+1;
        }
        m = s+(e-s)/2;
    }
    return ans;
}
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        int n = v.size();
        pair<long,long> p;
        p.first = firstOccurence(v,n,x);
        p.second = lastOccurence(v,n,x);
        return p;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends