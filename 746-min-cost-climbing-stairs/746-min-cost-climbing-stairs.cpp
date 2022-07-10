class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int *ans = new int[n];
        ans[0] = cost[0];
        ans[1] = cost[1];
        for(int i=2;i<cost.size();i++){
            ans[i] = cost[i] + min(ans[i-1], ans[i-2]);
        }
        return min(ans[cost.size()-2], ans[cost.size()-1]);
    }
};