class Solution {
public:
      vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        vector<int>ar(n,-1);
        vector<vector<int>>ans(n);
        sort(people.begin(),people.end());
        ar[people[0][1]]=0;
        ans[people[0][1]]=people[0];
        for(int i=1;i<n;i++){
            int gap=people[i][1];
            for(int j=0;j<n;j++)
                if(ar[j]==-1){
                    if(gap>0)gap--;
                    else {
                        ar[j]=i;
                        ans[j]=people[i];
                        break;
                    }
                }
                else if(people[ar[j]][0]==people[i][0])gap--;
        }
        return ans;
    }
};