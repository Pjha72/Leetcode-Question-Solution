class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<=1){
            return nums.size();
        }
        int upcount=1,downcount=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                upcount=downcount+1;
            }
            else if(nums[i]>nums[i+1]){
                downcount=upcount+1;
            }
        }
        int ans = max(upcount,downcount);
        return ans;
    }
};