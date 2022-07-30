class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        // ***********Step 1 ***************
       vector<int> universal(26,0);
        for(char &ch : words2[0]  ) universal[ch-'a']++;
        for(int i=1;i<words2.size();++i)
        {
            vector<int> temp(26,0);
            for(char &ch : words2[i])
                if(universal[ch-'a'] < ++temp[ch-'a']) universal[ch-'a']++;
        }
        // *************Step 2 ************
        for(string &str  : words1)
        {
            vector<int> freq(26,0);
            for(char &ch : str) freq[ch-'a']++;
            bool valid = true;
            for(int i=0;i<26 && valid;i++)
                if(freq[i]<universal[i]) valid=false;
            if(valid) ans.emplace_back(str);
        }
        return ans;
    }
};