class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> ans(arr.size()+1);
        for(int i=1;i<=arr.size();i++){
            ans[i]=ans[i-1]+arr[i-1];
        }
        int sum=0;
        for(int i=0;i<=arr.size();i++){
            for(int j=i+1;j<=arr.size();j++){
                if((i^j)&1){
                    sum+=ans[j]-ans[i];
                }
            }
        }
        return sum;
    }
};