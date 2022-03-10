class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count=0;
        auto p1 = points[0];
        for(int i=0;i<points.size();i++){
           auto p2 = points[i];
            int x = p2[0] - p1[0];
            int y = p2[1] - p1[1];
            count+=max(abs(x),abs(y));
            p1=p2;
        }
        return count;
    }
};