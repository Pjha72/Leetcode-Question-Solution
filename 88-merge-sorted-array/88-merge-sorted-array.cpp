class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
    int i=0,j=0;
	int k = 0;
	while(i<m && j<n){
		if(nums1[i]<=nums2[j]){
			ans.push_back(nums1[i++]);
            k++;
		}
		else {
			ans.push_back(nums2[j++]);
            k++;
		}
	}
        

	//copy first array k element ko
	while(i<m){
		ans.push_back(nums1[i++]);
	k++;
	}
	//copy second array k element ko
	while(j<n){
		ans.push_back(nums2[j++]);
	k++;
	}
        for(i=0;i<m+n;i++){
            nums1[i] = ans[i];
        }
    }
};