class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
      int n = nums.size();
      vector<int> P(n+1,0);
        for(int i=0;i<n;i++){
            P[i+1] = P[i] + nums[i];
       }
        int s=0,ans=0;
        vector<int> M(10001,-1);
        for(int i=0;i<n;i++){
            s=max(s,M[nums[i]]+1);
            ans = max(ans,P[i+1]-P[s]);
            M[nums[i]] = i;
        }
        return ans;
    }
};