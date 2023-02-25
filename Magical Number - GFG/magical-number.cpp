//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 
int binarySearch(int arr[], int low, int high);
int main()
{
	int test =0; 
	cin>>test;
	while(test--)
	{
	    int n, i; 
	    cin>>n; 
	    int a[n]; 
	    for(i=0; i<n; i++)
	    cin>>a[i]; 
	    
	    cout<<binarySearch(a, 0, n-1)<<endl; 
	    
	   // cout<<"\n\n"; 
	}
	
}

// } Driver Code Ends


int binarySearch(int arr[], int low, int high)
{
    int m = low+(high-low)/2;
    int ans = -1;
      while(low<=high){
          if(arr[m]==m){
              ans = arr[m];
              high = m-1;
          }
          if(arr[m]>m){
              high = m-1;
          }
          else{
              low = m +1;
          }
           m = low+(high-low)/2;
      }
      return ans;
}