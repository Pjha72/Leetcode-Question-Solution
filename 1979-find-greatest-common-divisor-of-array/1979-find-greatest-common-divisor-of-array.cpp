class Solution {
public:
    int gcd(int a, int b){
	//remanider a%b
	    if(b==0){
		    return a;
	    }
        else if(a<b){
             return gcd(b,a);
         }
	    return gcd(a%b,b);
	//o(log(n))
}
int findGCD(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int ans = gcd(nums[0],nums[(nums.size()-1)]);
    return ans;
    }
};