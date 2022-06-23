class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
		//making vector of pairs cuz we need to sort by second term
		vector < pair < int,int > > v;
        
        for(int i = 0; i < courses.size(); i++)
        {
            int j = 1;
			v.push_back( make_pair (courses[i][j], courses[i][--j]));   //courses[i][1] = first term , courses[i][0] = second term
       }
       
		sort(v.begin(), v.end());       //now simply sort :)
       
        priority_queue <int> pq;
        
        int days = 0;
        for(auto x : v) {
            days += x.second;
            pq.push(x.second);
            if(days > x.first) {
                days -= pq.top();
                pq.pop();
            }
        }
        
        return pq.size();
    }
};