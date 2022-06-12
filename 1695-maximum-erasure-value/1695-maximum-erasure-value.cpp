class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
      int n = nums.size();
      int st=0,end=0;
        map<int,int> m;
        int windowsum=0;
        int ans=0;
        
        while(end<n){
            windowsum+=nums[end];
            while(m.find(nums[end])!=m.end()){
                windowsum-=nums[st];
                m.erase(nums[st]);
                st++;
            }
            ans = max(ans,windowsum);
            m[nums[end]]=end;
             end++;
        }
        return ans;
    }
};