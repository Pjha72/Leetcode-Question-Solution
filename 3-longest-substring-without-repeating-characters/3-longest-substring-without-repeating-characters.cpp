class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> ans(256,-1);
        int n=s.size(),maxLen=0,start=-1;
        for(int i=0;i<n;i++){
            if(ans[s[i]]>start){
                start = ans[s[i]];
            }
            ans[s[i]] =i;
            maxLen = max(maxLen,i-start);
        }
        return maxLen;
    }
};