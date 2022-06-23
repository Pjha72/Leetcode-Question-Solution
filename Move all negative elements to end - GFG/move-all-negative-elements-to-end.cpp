// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
       vector<int> v1;
       vector<int> v2;
       
        for(int i=0;i<n;i++){
           if(arr[i]>0)
           {
               v1.push_back(arr[i]);
           }
           else{
                v2.push_back(arr[i]);
           }
        }
        
        for(int i=0;i<v1.size();i++){
            arr[i] = v1[i];
        }
        int k=0;
        for(int i=v1.size();i<n;i++){
            arr[i] = v2[k];
            k++;
        }
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends