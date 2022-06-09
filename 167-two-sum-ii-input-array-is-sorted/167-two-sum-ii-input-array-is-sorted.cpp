class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0,e=numbers.size()-1;
        while(s<e){
            int sum = numbers[s]+numbers[e];
            if(sum<target){
                s++;
            }
            else if(sum>target){
                e--;
            }
            else{
                vector<int> ans{s+1,e+1};
                return ans;
            }
        }
        return {0,0};
    }
};