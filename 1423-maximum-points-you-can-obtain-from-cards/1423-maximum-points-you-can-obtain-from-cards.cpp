class Solution {
public:
    int maxScore(vector<int>& points, int k) {
        int sum1 = 0, sum2 = 0;
        
        for(int i = 0; i < k; i++) {
            sum1 += points[i];
        }
        
        int ans = sum1;
        
        int i = k - 1, j = points.size() - 1;
        while(i >= 0) {
            sum1 -= points[i--];
            sum2 += points[j--];
            ans = max(ans, sum1 + sum2);
        }
        
        return ans;
    }
};