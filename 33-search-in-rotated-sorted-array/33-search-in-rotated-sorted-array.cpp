class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int m = s;
        while(m<=e){
            if(nums[m]==target){
                return m;
            }
            else{
                m++;
            }
        }
        return -1;
    }
};