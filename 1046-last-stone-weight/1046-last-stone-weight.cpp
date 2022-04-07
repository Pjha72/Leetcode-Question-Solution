class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(),stones.end());
        
        while(stones.size()>1){
            int k = stones.size()-1;
            int x = stones[k],y = stones[k-1];
            stones.pop_back();
            stones.pop_back();
            if(x!=y){
                stones.push_back(x-y);
            }
            sort(stones.begin(),stones.end());
        }
        if(stones.empty()){
            return 0;
        }
        return stones[0];
    }
};