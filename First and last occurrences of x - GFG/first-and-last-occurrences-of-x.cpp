//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int firstOccu(int *arr, int n , int x){
    int x1=-1,s=0,e=n-1,m=(s+e)/2;
    while(s<=e){
        if(arr[m]==x){
            x1=m;
            e=m-1;
        }
        else if(x>arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=(s+e)/2;
    }
    return x1;
}
int secondOccu(int *arr, int n , int x){
    int x2=-1,s1=0,e1=n-1,m1=(s1+e1)/2;
    while(s1<=e1){
        if(arr[m1]==x){
            x2=m1;
            s1=m1+1;
        }
        else if(x>arr[m1]){
            s1=m1+1;
        }
        else{
            e1=m1-1;
        }
        m1=(s1+e1)/2;
    }
    return x2;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int ans = firstOccu(arr,n,x);
    int ans1 = secondOccu(arr,n,x);
    if(ans==-1 && ans1 ==-1){
        v.push_back(ans);
        v.push_back(ans1);
    }
    else{
        v.push_back(ans);
        v.push_back(ans1);
    }
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends