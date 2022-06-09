// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long s, long long e){
	long long  m=(s+e)/2;
	long long inv_count=0;
    long long  len1 = m-s+1;
    long long  len2 = e-m;

	long long  *first = new long long[len1];
	long long  *second = new long long[len2];

	//copy values
	long long  k=s;
	for(long long i=0;i<len1;i++){
		first[i]=arr[k++];
	}
	//copy values
	 k=m+1;
	for(long long  i=0;i<len2;i++){
		second[i]=arr[k++];
	}

	//merge 2 sorted array
	long long  index1 = 0;
	long long  index2 = 0;
	k=s;

	while(index1 < len1 && index2 < len2){
		if(first[index1] <= second[index2]){
			arr[k++] = first[index1++];
		}
		else{
			arr[k++] = second[index2++];
			inv_count+=(len1-index1);
		}
	}

	while(index1<len1){
		arr[k++] = first[index1++];
	}
	while(index2 < len2){
		arr[k++] = second[index2++];
	}
	 delete []first;
     delete []second;
	 return inv_count;
}

long long int mergeSort(long long arr[], long long s, long long e){
	long long  m = (s+e)/2;
	long long int inv_count=0;
	//Base Case
	if(s>=e){
		return inv_count;
	}
	//left part sort kerna hai
	inv_count+=mergeSort(arr,s,m);
	//Right part sort kerna hai
	inv_count+=mergeSort(arr,m+1,e);

	//Merge left and right part
	inv_count+=merge(arr,s,e);
	return inv_count;
}

    long long int inversionCount(long long arr[], long long N)
    {
         long long int inv_count = mergeSort(arr,0,N-1);
         return inv_count;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends