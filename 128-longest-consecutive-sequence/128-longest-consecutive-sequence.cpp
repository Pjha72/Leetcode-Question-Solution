class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestStreak = 0;
        unordered_set<int>s(nums.begin(),nums.end());
        
        for(int num : nums){
            if(s.find(num-1) == s.end()){
                int currentnum = num;
                int currentstreak = 1;
                
                while(s.find(currentnum+1)!=s.end()){
                    currentnum++;
                    currentstreak++;
                }
                longestStreak = max(longestStreak, currentstreak);
            }
            
        }
        return longestStreak;
    }
};