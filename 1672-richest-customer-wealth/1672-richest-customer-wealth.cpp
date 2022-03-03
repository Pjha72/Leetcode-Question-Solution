class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        for(vector<int>& account : accounts){
            int sum=0;
            for(int m : account){
                sum+=m;
            }
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};