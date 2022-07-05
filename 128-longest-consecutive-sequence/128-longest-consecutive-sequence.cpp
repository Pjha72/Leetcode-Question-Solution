class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int finalans=0;
        if(nums.size() == 0)return 0;
        int i=0, j=0;
        while(i<nums.size() -1){
            
            if(nums[i]+1 == nums[i+1]){
                i++;
                finalans = max(finalans, i-j+1);
            }
            else if(nums[i] == nums[i+1]){
                j++;
                i++;
                
            }
            else if(nums[i]+1 != nums[i+1]){
                i++;
                j = i;
            }
        }
        if(finalans ==0)
            return 1;
        else
            return finalans;
    }
};