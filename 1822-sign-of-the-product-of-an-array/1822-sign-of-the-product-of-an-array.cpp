class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0){
                count++;
            }
        }
        if((count&1)!=0){
            return -1;
        }
        return 1;
    }
};