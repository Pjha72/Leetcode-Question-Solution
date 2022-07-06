class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       
        if(nums.size()==0) return 0;
        int temp=1,Max =1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i] == nums[i-1]+1){
                    temp++;
                }
                else{
                    Max = max(Max , temp);
                    temp=1;
                }
            }
            
        }
        return (max(Max,temp));
    }
};