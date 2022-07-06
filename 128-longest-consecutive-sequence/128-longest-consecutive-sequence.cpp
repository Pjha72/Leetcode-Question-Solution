class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestStreak = 0;
        set<int>hashset;
        for(int num : nums){
            hashset.insert(num);
        }
        
        for(int num : nums){
            if(!hashset.count(num-1)){
                int currentnum = num;
                int currentstreak = 1;
                
                while(hashset.count(currentnum+1)){
                    currentnum++;
                    currentstreak++;
                }
                longestStreak = max(longestStreak, currentstreak);
            }
            
        }
        return longestStreak;
    }
};