class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[0];
        int b = nums[(nums.size()-1)];
        if(b==0){
            return a;
        }
        else if(a<b){
            return gcd(b,a);
        }
        else{
            return gcd(b,a%b);
        }
    }
};